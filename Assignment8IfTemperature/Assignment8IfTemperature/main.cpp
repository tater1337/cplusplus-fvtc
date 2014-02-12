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
	string outputMessage = "";
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

	// 3 do calculations and // 4 output results
	//this could be done as two separate parts except for the error message
	//Output the result with an appropriate message to 2 decimal place precision.
	cout << setprecision(2) << fixed;
	
	//If the letter is f, the program is to treat the temperature as degrees fahrenheit, convert the number to the equivalent temperature in degrees celsius, 
	//Allow both lower and upper case input.
	if (C == 'F' || C == 'f') //input is in fahrenheit
	//Celsius = (5.0/9.0)*(fahrenheit – 32.0)
	{
		outputTemp = (5.0/9.0)*(inputTemp - 32.0);
		//outputMessage = inputTemp + "C" + " is equal to " + outputTemp << "C"; <<< need more code knowldege than taught so far
		cout << inputTemp << C << " is equal to " << outputTemp << "C";
	}
	//If the letter is c, the program is to consider the number entered as a celsius temperature and convert the number to the equivalent fahrenheit temperature and 
	//Allow both lower and upper case input.
	else if (C == 'C' || C == 'c') //input is in celsius
	//Fahrenheit = (9.0/5.0)*celsius + 32.0
	{
		outputTemp = (9.0/5.0)*(inputTemp + 32.0);
		cout << inputTemp << C << " is equal to " << outputTemp << "F";
	}
	//If the letter is neither f nor c, the program is to print an error message and terminate.
	else
	{
			outputMessage = "temprature scale invalid";
	}

	cout << outputMessage << endl;

	cout << "\nPress any key to exit";
	_getch();

	return 1;
}