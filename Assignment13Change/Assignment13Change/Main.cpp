#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings

using namespace std;

bool getchange(double,int&,int&,int&,int&,int&,int&); //$5, $1, quarters, dimes, nickels, and pennies

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
		
		//You are to allow the enduser to input the purchase price. 
		//Assume that the purchase price is under $10, and you are to pay for the purchase with a $10 bill. 
		//Be sure to identify errors to the user for invalid purchase price. 
		
		//You are to pass the purchase prices to the function by value. Since you 
		//want to �return� the number of $5, $1, quarters, dimes, nickels, and pennies as well, 
		//you must pass these by reference. 
		
		// 
		//Note: you may have some rounding problems due to C++�s treatment of floating point 
		//values. Deal with this appropriately. 
		// 
		
		//Include this function in a working program. Make sure your function is called from 
		//main() and correctly �returns� the values to main(). Include appropriate messages in 
		//main() to describe the output to the end user. 
		// 
		cout << endl; //just to clean up the loop
		// 1 declare variables we need
		double dblPrice = 0;
		int intF,intO,intQ,intD,intN,intP = 0;
		// 2 get variables from user
		cout << "Enter the price: ";
		cin >> dblPrice;
		cout << endl;
		// 3 do calculations
		if (getchange(dblPrice,intF,intO,intQ,intD,intN,intP))
		{

		}
		else
		{
			cout << "there was an error" << endl;;
		}
		// 4 output results

			cout << "Price is : $" << dblPrice << endl;
			cout << "the change from a $10 bill will be: " << endl;
			cout << endl;
			cout << "Fives" << endl;
			cout << "Ones" << endl;
			cout << "Quaters" << endl;
			cout << "Dimes" << endl;
			cout << "Nickels" << endl;
			cout << "Pennies" << endl;
			cout << endl;
	
		cout << "\nPress any key to loop or q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}

bool getchange(double dblPrice,int& F,int& O,int& Q,int& D,int& N,int& P)
{
	return 1;
}