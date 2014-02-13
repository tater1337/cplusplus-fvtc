#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings

using namespace std;

void CtoF(double inTemp)
	{
		double outputTemp = 0;
		outputTemp = (9.0/5.0)*(inTemp + 32.0);
		cout << inTemp << "C is equal to " << outputTemp << "F";
	}
	
void FtoC(double inTemp)
	{
		double outputTemp = 0;
		outputTemp = (5.0/9.0)*(inTemp - 32.0);
		//outputMessage = inputTemp + "C" + " is equal to " + outputTemp << "C"; <<< need more code knowldege than taught so far
		cout << inTemp << "F is equal to " << outputTemp << "C";
	}

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
	bool quit = false;

	while (quit == false)
	{
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
		//Rewrite Program 8 using switch logic.
		switch (C)
		{
		case ('F'):
			FtoC(inputTemp);
			break;
		case ('C'):		
			CtoF(inputTemp);
			break;
		case ('f'):
			FtoC(inputTemp);
			break;
		case ('c'):		
			CtoF(inputTemp);
			break;
		default:
			//If the letter is neither f nor c, the program is to print an error message and terminate.
			outputMessage = "temprature scale invalid";
			break;
		}
	
		cout << endl << outputMessage << endl;
	
	cout << "\nPress any key to loop or q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}