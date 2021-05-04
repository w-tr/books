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
// Description    : Working with Fractions in Object-C
// Concepts       : Program is logically divided, there is are layers of 
//                :     insulation (data encapsulation)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#import <stdio.h>
#import <objc/Object.h>

@interface Fraction: Object
{
	int numerator;
	int denominator;
}
-(void) setNumerator: (int) n;
-(void) setDenominator: (int) n;
-(void) print: (int) n;

@end

@implementation Fraction;
// getters
-(int) numerator
{
    return numerator;
}
-(int) denominator
{
    return denominator;
}
// setters
-(void) setNumerator: (int) num
{
    numerator = num;
}
-(void) setDenominator: (int) num
{
    denominator = num;
}
// other
-(void) print
{
    printf("The value of the fraction is %i/%i\n", numerator, denominator);
} 
@end

int main(void)
{
    Fraction *myFract;

    myFract = [Fraction new];
    [myFract setNumerator: 1];
    [myFract setDenominator: 3];

    printf("The numerator is %i, and the denominator is %i\n", [myFract numerator], [myFract denominator]);
    [myFract print];

    [myFract free];

    return 0;
}

