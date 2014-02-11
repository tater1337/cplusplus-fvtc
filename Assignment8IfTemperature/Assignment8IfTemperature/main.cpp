//created because I cannot create a default C++ templpate to start all my programs with
//i Proboably could but not when I am also using VS2012 for other classes

#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings

using namespace std;

int main()
{

	//	90378: Computer Programming C++ 90378
	//	Tater Schuld	500139932
	//
//Write a C++ program that accepts a 

	//Use the following calculations:
	//Celsius = (5.0/9.0)*(fahrenheit – 32.0)
	//Fahrenheit = (9.0/5.0)*celsius + 32.0
	//Use appropriate messages when requesting the input. 
	//Output the result with an appropriate message to 2 decimal place precision.
	//You must include comments in your program. Demonstrate your program and submit the printed source code.
	//
	
	// 1 declare variables we need
	double inputTemp = 0;
	double outputTemp = 0;
	string outputScale = "Kelvin";
	char C= 'x';

	// 2 get variables from user

	// accepts a number for the temperature to be converted and 
	cout << endl;
	cout << "Enter a temperature :";
	cin >> inputTemp;

	//a letter indicating which temperature scale it is currently in. 
	cout << endl;
	cout << "Enter C for celcius or F for Fahrenheit :";
	C = _getch();
	cout << endl;

	// 3 do calculations
	//If the letter is f, the program is to treat the temperature as degrees fahrenheit, convert the number to the equivalent temperature in degrees celsius, 
	//Allow both lower and upper case input.
	if (C == 'F' || C == 'f')
	//If the letter is c, the program is to consider the number entered as a celsius temperature and convert the number to the equivalent fahrenheit temperature and 
	//Allow both lower and upper case input.
	else if (C == 'C' || C == 'c')
	//If the letter is neither f nor c, the program is to print an error message and terminate.
	else 

	//Use the following calculations:
	//Celsius = (5.0/9.0)*(fahrenheit – 32.0)
	//Fahrenheit = (9.0/5.0)*celsius + 32.0


	// 4 output results

	//print a suitable display message. 
	
	cout << "output" << inputTemp << " " << C;

	cout << "\nPress any key to exit";
	_getch();

	return 1;
}