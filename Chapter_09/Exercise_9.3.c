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
// Description    : Find the elapsed time between t1, t2.
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

struct sTime
{
    int hour;      
    int minutes;
    int seconds;
};

struct sTime getTime(void)
{
    struct sTime theTime;
    printf("Enter a time (hh:mm:ss) : ");
    scanf("%d:%d:%d", &theTime.hour, &theTime.minutes, &theTime.seconds);
    return theTime;
}
    
struct sTime elapse_time(struct sTime t1, struct sTime t2)
{
    struct sTime tOut;
    if (t1.seconds > t2.seconds)
    {
        t2.seconds+=60;
        t2.minutes--;
    }
    tOut.seconds = t2.seconds - t1.seconds;
    if (t1.minutes > t2.minutes)
    {
        t2.minutes+=60;
        t2.hour--;
    }
    tOut.minutes = t2.minutes - t1.minutes;
    if (t1.hour > t2.hour)
    {
        t2.hour+=24;
    }
    tOut.hour = t2.hour - t1.hour;

    return tOut;
}


int main(void)
{
    struct sTime t1, t2, t3;
    struct sTime elapse_time(struct sTime t1, struct sTime t2);
    struct sTime getTime(void);

    t1 = (struct sTime) {23, 55, 40};
    t2 = (struct sTime) {.minutes = 2, .hour = 4, .seconds = 45};
    printf("T1 = %.2i:%.2i:%.2i\n", t1.hour, t1.minutes, t1.seconds);
    printf("T2 = %.2i:%.2i:%.2i\n", t2.hour, t2.minutes, t2.seconds);
    t3 = elapse_time(t1, t2);
    printf("Time difference is : %.2i:%.2i:%.2i\n", t3.hour, t3.minutes, t3.seconds);
    t2 = (struct sTime) {23, 55, 40};
    t1 = (struct sTime) {.minutes = 2, .hour = 4, .seconds = 45};
    printf("T1 = %.2i:%.2i:%.2i\n", t1.hour, t1.minutes, t1.seconds);
    printf("T2 = %.2i:%.2i:%.2i\n", t2.hour, t2.minutes, t2.seconds);
    t3 = elapse_time(t1, t2);
    printf("Time difference is : %.2i:%.2i:%.2i\n", t3.hour, t3.minutes, t3.seconds);
    t1 = getTime();
    t2 = getTime();
    t3 = elapse_time(t1, t2);
    printf("Time difference is : %.2i:%.2i:%.2i\n", t3.hour, t3.minutes, t3.seconds);
    return 0;
}
