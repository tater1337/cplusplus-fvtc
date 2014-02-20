
#include <conio.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//declare function
double calculateWage(double salary, double hours_per_week);
double hours_per_year = 0;
double hourly = 0;

int main()
{

//	90378: Computer Programming C++ 90378
//	Tater Schuld	500139932
//
//	insert comments here
//

// 1 declare variables we need
	double salary = 0;
	double hours_per_week = 0;
	string name = "";


// 2 get variables from user
	cout << " please enter your salary: " ;
	cin >> salary;
	cout << " please enter hours worked in a week: " ;
	cin >> hours_per_week;
	//cout << " please enter your name: " ;
	//cin >> name;
	
// 3 do calculations
	hours_per_year = hours_per_week * 50;
	hourly = salary / hours_per_year;
// 4 output results

	//cout << endl << name << " entered: " << salary;
	cout << "hourly salary is: " << calculateWage(salary,hours_per_week);
	//pause to exit
	cout << "\nPress any key to exit";
	_getch();

	return 1;
}

double calculateWage(double salary, double hours_per_week)
{
	hours_per_year = hours_per_week * 50;
	hourly = salary / hours_per_year;
	return hourly;
}