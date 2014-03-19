#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings
#include "..\..\businessLayer.h" // is numeric

using namespace std;
//You are to pass the purchase prices to the function by value. Since you 
//want to “return” the number of $5, $1, quarters, dimes, nickels, and pennies as well, 
//you must pass these by reference. 
bool getchange(double dblPrice,int &F,int &O,int &Q,int &D,int &N,int &P); //$5, $1, quarters, dimes, nickels, and pennies

int main()
{
	bool quit = false;

//initialize variables here

	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//1/12/2010 
		//C++ Programming 
		//Assignment 13 
		//change 
		// 
		//Write a C++ user defined function change that will calculate the least number of coins 
		//and bills needed to create change for a purchase. 
		// 
		//Note: you may have some rounding problems due to C++’s treatment of floating point 
		//values. Deal with this appropriately. really? how?
		// 
		
		cout << endl; //just to clean up the loop
		
		// 1 declare variables we need
		string strInput ="";
		double dblPrice = 0;
		int intF,intO,intQ,intD,intN,intP = 0;
		
		//You are to allow the enduser to input the purchase price. 
		//Assume that the purchase price is under $10, and you are to pay for the purchase with a $10 bill. 
		//Be sure to identify errors to the user for invalid purchase price. 
		// 2 get variables from user
		while (dblPrice <=0 || dblPrice >10)
		{
			do 
			{
			cout << "Enter a valid purchase price: ";
			cin >> strInput;
			} while (!businessLayer::isNumeric(strInput)); //check to make sure it is a number
			
			dblPrice = businessLayer::ConvertToDouble(strInput); 
		}

		cout << endl;
		
		// 3 do calculations
		//Include this function in a working program. Make sure your function is called from 
		//main() and correctly “returns” the values to main(). Include appropriate messages in 
		//main() to describe the output to the end user. 
		if (getchange(dblPrice,intF,intO,intQ,intD,intN,intP))
		{
			
			// 4 output results

			cout << "Price is : $" << dblPrice << endl;
			cout << "the change from a $10 bill will be: " << endl;
			cout << endl;
			cout << "Fives   :" << intF << endl;
			cout << "Ones    :" << intO << endl;
			cout << "Quaters :" << intQ << endl;
			cout << "Dimes   :" << intD << endl;
			cout << "Nickels :" << intN << endl;
			cout << "Pennies :" << intP << endl;
			cout << endl;
		}
		else //this should never ever trigger
		{
			cout << "there was an error" << endl;;
		}
		
	
		cout << "\nPress any key to loop or q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}

//You are to pass the purchase prices to the function by value. Since you 
//want to “return” the number of $5, $1, quarters, dimes, nickels, and pennies as well, 
//you must pass these by reference. 
bool getchange(double dblPrice,int &F,int &O,int &Q,int &D,int &N,int &P)
{
	F = 0; //WHY DO i HAVE TO DO THIS AT ALL?
	O = 0;
	Q = 0; // for when the quit loop is repeated
	D = 0; // no, because int x,x,x,x,x,x=0 does that.....hmmmm
	N = 0;
	P = 0;
	//F,O,Q,D,N,P = 0; why didn't this work?
	double dblTotalChange = 10 - dblPrice;
	
	// figure out the number of fives to return (should almost always be 1 and NEVER more than 2)	
	while (dblTotalChange >=5)
	{
		dblTotalChange -=5;
		F += 1;
	}
	
	// figure out the number of ones to return
	while (dblTotalChange >=1)
	{
		dblTotalChange -=1;
		O += 1;
	}
	
	// figure out the number of Quarters to return
	while (dblTotalChange >=.25)
	{
		dblTotalChange -=.25;
		Q += 1;
	}
	// figure out the number of Dimes to return
	while (dblTotalChange >=.1)
	{
		dblTotalChange -=.1;
		D += 1;
	}
	// figure out the number of Nickels to return
	while (dblTotalChange >=.05)
	{
		dblTotalChange -=.05;
		N += 1;
	}
	// figure out the number of Pennies to return
	while (dblTotalChange >=.01)
	{
		dblTotalChange -=.01;
		P += 1;
	}
	
	return 1;
}