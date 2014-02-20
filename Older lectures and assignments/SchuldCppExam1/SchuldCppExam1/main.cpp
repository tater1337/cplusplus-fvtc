#include <conio.h>
#include <iomanip>
#include <iostream>

//C++ Exam 1
//Write a C++ program that displays the following output:
//Be sure to include appropriate comments!

using namespace std;

int main()
{
	//variables
	//The numeric miles and gallons values should be stored in (and output by) appropriate variables, 
	double miles = 0;
	double gallons = 0;
	double mpg = 0;
	//input
	//Enter the miles driven: 47.3
	//Enter the gallons of gas used: 3

	cout << "Enter the miles driven: ";
	cin >> miles;
	cout << endl;
	//Enter the gallons of gas used:
	cout << "Enter the gallons of gas used: ";
	cin >> gallons;
	cout << endl;
	//calculation
	//and the miles per gallon should be the result of the following formula: 
	//miles per gallon = (miles driven / gallons of gas used).
	mpg = miles/gallons;
	//output
	//Display the result with 1 decimal point precision.
	cout << "Miles Per Gallon: " << setprecision(1) << fixed << mpg;
	cout << endl;
	//where the heck is the anykey?
	cout << "\nPress any key to exit";
	_getch();

	return 1;

}