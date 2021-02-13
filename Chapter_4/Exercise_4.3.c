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
// Description    : Finding invalid initalisation values/constants
// Concepts       : What values are and aren't acceptable.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{

    // Check valid constants
    float a = 123.456;
//  float b = 0x10.5;  // Requires Exp for hex, can't have decimal
//  float c = 0x0G1;   // Suffix after X (the G) is bad
    float d = 0001;
    float e = 0xFFFF;
    float f = 123L;
    float g = 0Xab05;
    float h = 0L;
    float i = -597.25;
    float j = 123.5e2;
    float k = .0001;
    float l = +12;
    float m = 98.6F;
//  float n = 98.7u;   // Cannot have unsigned on float?
//  int   o = 17777s;  // no storage of shorts, can display with h
//  float p = 0996;    // Assumes base 8 because of the 0 start.
    float q = -12E-12;
    float r = 07777;
    float s = 1234uL;
//  float t = 1.2Fe-7; // F in the wrong place
    float t = 1.2e-7f; 
//  float u = 15,000;  // No commas allowed
    float v = 1.234L;
    float w = 197u;
    float x = 100U;
    float y = 0xABCDEFL;
    float z = 0xabcu;
    float aa = +123;

    return 0;
}




