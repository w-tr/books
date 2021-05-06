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
// Description    : Working with Fractions in C#
// Concepts       : C# Has properties. Get and set are used if being assigned or 
//                :     being assigned to.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
using System;

class Fraction
{
	private int numerator;
	private int denominator;
	
	public int Numerator
	{
		get
		{
			return numerator;
		}
		set
		{
			numerator = value;
		}
	}
	
	public int Denominator
	{
		get
		{
			return denominator;
		}
		set
		{
			denominator = value;
		}
	}
	
	public void print()
	{
		Console.WriteLine("The value of the fraction is {0}/{1}", numerator, denominator);
	}
}

class example
{
	public static void Main()
	{
		Fraction myFract = new Fraction();
		myFract.Numerator = 1;
		myFract.Denominator = 3;
		
		myFract.print();
		
	}
}
