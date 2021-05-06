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
// Description    : Working with Fractions in C++
// Concepts       : Private declaration forces data encapsulation.
//                : Methods follow class with :: 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>

// Declaration
class Fraction
{
    private:
        int numerator;
        int denominator;

    public:
        void setNumerator (int num);
        void setDenominator (int denom);
        int Numerator (void);
        int Denominator (void);
        void printf (Fraction f);
};

//Descrioption
void Fraction::setNumerator(int num)
{
    numerator = num;
}
void Fraction::setDenominator (int denom);
{
    denominator = denmon;
}
int Fraction::Numerator (void);
{
    return numerator;
}
int Fraction::Denominator (void);
{
    return denominator;
}
void Fraction::printf (Fraction f);
{
    std::cout << "The value of the fraction is " << numerator << '/' << denominator << '\n';
}

// main
int main (void)
{
    Fraction myFract;

    myFract.setNumerator (1);
    myFract.setDenominator (3);

    myFract.print();

    return 0;
}

}

