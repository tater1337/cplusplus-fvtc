#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings
#include "businessLayer.h" 
using namespace std;

int main()
{
	bool quit = false;

//initialize variables here


	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//Write a program that 
		//
		//Be sure to include an explanation to the user of what the program is to accomplish.
		//
		//begins with a request that the user enter two numeric values. 
		//
		//loop 1 
		//	check number
		//
		//loop 2 
		//	check number
		//
		//loop menu select
		//	The program will check selections for a valid range of values for menu selection. An 
		//	invalid selection should result in notifying the user of the error and requesting the user 
		//	to resubmit their choice. 
		//
		//The results will be displayed on the screen (with an appropriate explanation). 
		//
		//
		//Somewhere in the program, allow the user to quit the application
		//end loop 0
		//
		//
		//Use spacing appropriately to make the application easy to use. You may use your 
		//imagination for screen layout. 
		//
		//Remember the user should see a screen that is pleasing to look at and easy to use. 
		//
		
		//Be sure to include an explanation to the user of what the program is to accomplish.
		cout << endl << "Number Manuipulation Program" << endl;
		cout << endl;
		cout << endl << "This program will ask you to enter two numbers." << endl;
		cout << "Then it will ask you to seleact an operation from a menu" << endl;
		// 1 declare variables we need
		string number1="";
		string number2="";
		double num1 = 0;
		double num2 = 0;
		string userInput="";
		char oper='q';
		double output=0;
		// 2 get variables from user
		//begins with a request that the user enter two numeric values. 
		
		do
		{
			cout << endl << "Please ener the first number: ";
			cin >> number1;
		} while (!businessLayer::isNumeric(number1));
		num1=businessLayer::ConvertToDouble(number1);
		do
		{
			cout << "Please ener the second number: ";
			cin >> number2;
		} while (!businessLayer::isNumeric(number2));
		num2=businessLayer::ConvertToDouble(number2);
		
		//Then the program should prompt the user to choose from a menu selection of five 
		//choices. 
		//The menu will allow you to 
		cout << endl << "operation choices" << endl;
		cout << " + | add the two numbers together" << endl;
		cout << " - | subtract the second number from the first, " << endl;
		cout << " * | multiply the two numbers together" << endl;
		cout << " / | divide the second number into the first number, " << endl;
		cout << " A | find the average of the two numbers." << endl;
		cout << endl;

		do
		{
		cout << "Enter a symbol on the left to perform the operation on the right :";
		cin >> userInput;
		}while (userInput != "+" && userInput != "-" && userInput != "*" && userInput != "/" && userInput != "a" && userInput != "A");
		
		// 3 do calculations
		
		oper = userInput.at(0);
		
		switch(oper)
		{
			//add them together, 
			case '+':
				cout << "add "<< number1 <<" and "<< number2 << " together"<< endl;
				cout << "the result is " << (num1 + num2);
				break;
			//subtract the second number from the first, 
			case '-':
				cout << "subtract "<<number2 <<" from "<<number1 << endl;
				cout << "the result is " << (num1 - num2);
				break;
			//multiply them together, 
			case '*':
				cout << "Multiply " << number1 << " and " << number2<< endl;
				cout << "the result is " << (num1 * num2);
				break;
			//divide the second number into the first number, 
			case '/':
				cout << "Divide " << number2 << " into " << number1<< endl;
				cout << "the result is " << (num1 / num2);
				break;
			//and find the average of the two numbers. 
			case 'a':
				cout << "Average of " << number1 << " and " << number2<< endl;
				cout << "the result is " << (num1 + num2)/2;
				break;
			//and find the average of the two numbers. 
			case 'A': //i would have done case checking separately if there was mor ethan one place for it
				cout << "Average of " << number1 << " and " << number2<< endl;
				cout << "the result is " << (num1 + num2)/2;
				break;
		default:
			break;
		}
		cout << endl;

		//After the users releases control, control is then sent back request two new numbers. 
		//Somewhere in the program, allow the user to quit the application
		cout << "\nPress any key to repeat or q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}