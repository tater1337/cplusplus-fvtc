#include <conio.h>
#include <iostream>
#include <iomanip>
#include <string> //needed for strings

using namespace std;

double convertToFahrenheit(double Celsius);

double Celsius = 0;

int main()
{

//	90378: Computer Programming C++ 90378
//	Tater Schuld	500139932
//
//Write a C++ program to accept a value entered from the keyboard and convert the temperature 
//
	
// 1 declare variables we need (now declared outside scope)
	//double Celsius = 0;
	//double Fahrenheit = 0;

// 2 get variables from user
	cout << endl;
	cout << "enter a temperature in Celsius: ";
	cin >> Celsius;


// 4 output results
//Your program should display both temperatures (with appropriate messages) to 2 
//decimal place precision.

	cout << endl;
	cout << "the temperature of " << Celsius << " Celsius is " << convertToFahrenheit(Celsius) << " Fahrenheit";

	cout << "\nPress any key to exit";
	_getch();

	return 1;
}

double convertToFahrenheit(double Celsius)
{
// 3 do calculations
//entered to degrees Fahrenheit, using the formula 
//Fahrenheit = (9.0/5.0)*Celsius +32.0
	double Fahrenheit = 0;
	Fahrenheit = (9.0/5.0)*Celsius +32.0;
	return Fahrenheit;
}