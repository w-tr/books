//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    ____ ___   __    _               
//   / __// o |,'_/  .' \              
//  / _/ / _,'/ /_n / o /   _   __  _    ___  _   _  __
// /_/  /_/   |__,'/_n_/   / \,' /.' \ ,' _/,' \ / |/ /
//                        / \,' // o /_\ `./ o // || / 
//                       /_/ /_//_n_//___,'|_,'/_/|_/ 
//  
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author         : Wesley Taylor-Rendal (WTR)
// Design history : Review git logs.
// Description    : Function clockKeeper, time roll over to day roll over
// Concepts       : 
//                : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

// -----------------------------------
// Global Variables
// -------------------------------fold
struct sTime
{
    int hour;      
    int minutes;
    int seconds;
};
struct sDate
{
    int day;      
    int month;
    int year;
};
struct sDateAndTime
{
    struct sDate s_date;
    struct sTime s_time;
};
bool gMidnightFlag;
// -------------------------------fold

// -----------------------------------
// Updating the Time 
// -------------------------------fold
struct sTime timeUpdate (struct sTime now)
{
    // reset on each call
    gMidnightFlag = false;
    ++now.seconds;

    // check second limit
    if (now.seconds == 60)
    {
        now.seconds = 0;
        ++now.minutes;

        if (now.minutes == 60)
        {
            now.minutes = 0;
            ++now.hour;
            
            if (now.hour == 24)
            {
                now.hour = 0; //midnight
                gMidnightFlag = true;
            }
        }
    }

    return now;
}
// -------------------------------fold

// -----------------------------------
// Updating the Date if it is required
// -------------------------------fold
struct sDate dateUpdate (struct sDate today)
{
    struct sDate tomorrow; 
    int numberOfDays (struct sDate d); 

    // check day limit in month
    if (today.day != numberOfDays(today))
    {
        tomorrow.day    =  today.day + 1;
        tomorrow.month  =  today.month;
        tomorrow.year   =  today.year;
    }
    // check end of year
    else if (today.month == 12) 
    {
        tomorrow.day    =  1;
        tomorrow.month  =  1;
        tomorrow.year   =  today.year+1;
    }
    // Assume its just a month iteration.
    else
    {
        tomorrow.day    =  1;
        tomorrow.month  =  today.month+1;
        tomorrow.year   =  today.year;
    }

    return tomorrow;
}

int numberOfDays (struct sDate d) // why struct date had to be globally declared.
{
    int days;
    bool isLeapYear (struct sDate d);
    const int daysPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear (d) == true && d.month == 2)
        days = 29;
    else 
        days = daysPerMonth[d.month];

    return days;
}

bool isLeapYear(struct sDate d)
{
    bool leapYearFlag;

    if ( (d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0) )
        leapYearFlag = true;
    else
        leapYearFlag = false;

    return leapYearFlag;
}
// -------------------------------fold

// -----------------------------------
// Clockkeeper for date and time
// -------------------------------fold 
struct sDateAndTime clockKeeper(struct sDateAndTime dt)
{
    struct sDate dateUpdate (struct sDate today);
    struct sTime timeUpdate (struct sTime now);

    dt.s_time = timeUpdate(dt.s_time);
    if (gMidnightFlag) // Alternatively I could check dt.s_time = 0,0,0
        dt.s_date = dateUpdate(dt.s_date);
    return dt;
}
// -------------------------------fold 

// -----------------------------------
// Main
// -------------------------------fold 
int main(void)
{
    struct sDateAndTime clockKeeper(struct sDateAndTime dt);
    
    //Testcase - Second Tickover
    const struct sDateAndTime testdata1 = (struct sDateAndTime) {.s_date={7,11,2001}, .s_time={22,58,58}};
    //Testcase - Minute Tickover
    const struct sDateAndTime testdata2 = (struct sDateAndTime) {.s_date={9,2,2004}, .s_time={22,58,59}};
    //Testcase - Hour Tickover
    const struct sDateAndTime testdata3 = (struct sDateAndTime) {.s_date={9,8,1997}, .s_time={22,59,59}};

    //Testcase - Day Tickover
    const struct sDateAndTime testdata4 = (struct sDateAndTime) {.s_date={21,11,2001}, .s_time={23,59,59}};
    //Testcase - Month Tickover
    const struct sDateAndTime testdata5 = (struct sDateAndTime) {.s_date={30,9,2001}, .s_time={23,59,59}};
    //Testcase - Year Tickover
    const struct sDateAndTime testdata6 = (struct sDateAndTime) {.s_date={31,12,2001}, .s_time={23,59,59}};
    //Testcase - Leap year Tickover
    const struct sDateAndTime testdata7 = (struct sDateAndTime) {.s_date={28,2,2004}, .s_time={23,59,59}};
    //Testcase - Non Leap year Tickover
    const struct sDateAndTime testdata8 = (struct sDateAndTime) {.s_date={28,2,2001}, .s_time={23,59,59}};

    struct sDateAndTime edit1;

    printf("----------Second Tickover-----------------------------------------------------------------------\n");
    printf("----------Original--------------------------------------------------Updated---------------------\n");
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            testdata1.s_date.day, testdata1.s_date.month, testdata1.s_date.year, 
            testdata1.s_time.hour, testdata1.s_time.minutes, testdata1.s_time.seconds);
    printf("\t\t");
    edit1 = clockKeeper(testdata1);
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            edit1.s_date.day, edit1.s_date.month, edit1.s_date.year, 
            edit1.s_time.hour, edit1.s_time.minutes, edit1.s_time.seconds);
    printf("\n");

    printf("----------Minute Tickover-----------------------------------------------------------------------\n");
    printf("----------Original--------------------------------------------------Updated---------------------\n");
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            testdata2.s_date.day, testdata2.s_date.month, testdata2.s_date.year, 
            testdata2.s_time.hour, testdata2.s_time.minutes, testdata2.s_time.seconds);
    printf("\t\t");
    edit1 = clockKeeper(testdata2);
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            edit1.s_date.day, edit1.s_date.month, edit1.s_date.year, 
            edit1.s_time.hour, edit1.s_time.minutes, edit1.s_time.seconds);
    printf("\n");

    printf("----------Hour Tickover-------------------------------------------------------------------------\n");
    printf("----------Original--------------------------------------------------Updated---------------------\n");
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            testdata3.s_date.day, testdata3.s_date.month, testdata3.s_date.year, 
            testdata3.s_time.hour, testdata3.s_time.minutes, testdata3.s_time.seconds);
    printf("\t\t");
    edit1 = clockKeeper(testdata3);
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            edit1.s_date.day, edit1.s_date.month, edit1.s_date.year, 
            edit1.s_time.hour, edit1.s_time.minutes, edit1.s_time.seconds);
    printf("\n");

    printf("----------Day Tickover--------------------------------------------------------------------------\n");
    printf("----------Original--------------------------------------------------Updated---------------------\n");
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            testdata4.s_date.day, testdata4.s_date.month, testdata4.s_date.year, 
            testdata4.s_time.hour, testdata4.s_time.minutes, testdata4.s_time.seconds);
    printf("\t\t");
    edit1 = clockKeeper(testdata4);
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            edit1.s_date.day, edit1.s_date.month, edit1.s_date.year, 
            edit1.s_time.hour, edit1.s_time.minutes, edit1.s_time.seconds);
    printf("\n");

    printf("----------Month Tickover------------------------------------------------------------------------\n");
    printf("----------Original--------------------------------------------------Updated---------------------\n");
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            testdata5.s_date.day, testdata5.s_date.month, testdata5.s_date.year, 
            testdata5.s_time.hour, testdata5.s_time.minutes, testdata5.s_time.seconds);
    printf("\t\t");
    edit1 = clockKeeper(testdata5);
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            edit1.s_date.day, edit1.s_date.month, edit1.s_date.year, 
            edit1.s_time.hour, edit1.s_time.minutes, edit1.s_time.seconds);
    printf("\n");

    printf("----------Year Tickover-------------------------------------------------------------------------\n");
    printf("----------Original--------------------------------------------------Updated---------------------\n");
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            testdata6.s_date.day, testdata6.s_date.month, testdata6.s_date.year, 
            testdata6.s_time.hour, testdata6.s_time.minutes, testdata6.s_time.seconds);
    printf("\t\t");
    edit1 = clockKeeper(testdata6);
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            edit1.s_date.day, edit1.s_date.month, edit1.s_date.year, 
            edit1.s_time.hour, edit1.s_time.minutes, edit1.s_time.seconds);
    printf("\n");

    printf("----------Leap Year Tickover--------------------------------------------------------------------\n");
    printf("----------Original--------------------------------------------------Updated---------------------\n");
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            testdata7.s_date.day, testdata7.s_date.month, testdata7.s_date.year, 
            testdata7.s_time.hour, testdata7.s_time.minutes, testdata7.s_time.seconds);
    printf("\t\t");
    edit1 = clockKeeper(testdata7);
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            edit1.s_date.day, edit1.s_date.month, edit1.s_date.year, 
            edit1.s_time.hour, edit1.s_time.minutes, edit1.s_time.seconds);
    printf("\n");

    printf("----------Non Leap Year Feb Tickover------------------------------------------------------------\n");
    printf("----------Original--------------------------------------------------Updated---------------------\n");
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            testdata8.s_date.day, testdata8.s_date.month, testdata8.s_date.year, 
            testdata8.s_time.hour, testdata8.s_time.minutes, testdata8.s_time.seconds);
    printf("\t\t");
    edit1 = clockKeeper(testdata8);
    printf("Date = %.2d/%.2d/%.2d, Time = %.2d:%.2d:%.2d", 
            edit1.s_date.day, edit1.s_date.month, edit1.s_date.year, 
            edit1.s_time.hour, edit1.s_time.minutes, edit1.s_time.seconds);
    printf("\n");

    return 0;
}

