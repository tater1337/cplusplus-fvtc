#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

	//Write a C++ program that 
	//You must include comments in your program. 
	
	// 1 declare variables we need (Be sure to declare the variables as appropriate data types and name the variables appropriately.) 
	//stores the number 106.54 in the variable firstnum, 
	double firstnum = 106.54;
	//89.532 in the variable secnum
	double secnum = 89.532;
	//98.76 in thirdnum. 
	double thirdnum = 98.76;
	//The total should be stored in the variable total and 
	double total = 0;
	//the average in the variable average. 
	double average = 106.54;

	// 2 get variables from user
		//none

	// 3 do calculations
	//Have your program calculate the total of the three numbers 
	total = firstnum + secnum + thirdnum;
	//and their average. 
	average = total / 3;

	// 4 output results
	//Output the three values as well as the total and the average.

	cout << "firstnum = " << firstnum << endl;
	cout << "secnum = " << secnum << endl;
	cout << "thirdnum = " << thirdnum << endl;
	//Output the total to 4 decimal places and the average to 1 decimal place.
	cout << setprecision(4) << fixed;
	cout << "total = " << total << endl;

	cout << setprecision(1);
	cout << "average = " << average << endl;

	cout << "\nPress any key to exit";
	_getch();

	return 1;
}