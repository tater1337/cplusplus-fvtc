#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout

using namespace std;

int main()
{

	//	90378: Computer Programming C++ 90378
	//	Tater Schuld	500139932
	//
	//Write a C++ program to compute and display a person’s weekly salary as determined by the following calculation:
	//You must include comments in your program. Demonstrate your program and submit the printed source code.
	//
	
	// 1 declare variables we need
	double hoursWorked = 0;
	double salary = 0;
	double wage = 8;
	double overtime = 12;

	// 2 get variables from user
	//The program should request the hours worked as input
	cout << "Please enter hours worked :";
	cin >> hoursWorked;
	cout << endl;
	
	// 3 do calculations
	//otherwise the person receives $8.00 for the first 40 hours plus $12.00 for each hour worked over 40 hours.
	if (hoursWorked > 40) salary = 40 * wage + (hoursWorked - 40)* overtime;
	//You should not allow negative hours to be entered.
	else if (hoursWorked < 0) salary = 0;//not sure what to put here
	//If the number of hours worked is less than or equal to 40, the person receives $8.00 per hour; 
	else salary = hoursWorked * wage;

	// 4 output results
	//display the salary as output.
	cout << "the salary is :";
	cout << salary << endl;

	cout << "\nPress any key to exit";
	_getch();

	return 1;
}