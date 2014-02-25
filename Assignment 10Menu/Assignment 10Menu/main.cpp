#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings

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
		string oper="";
		double output=0;
		// 2 get variables from user
		cout << endl << "Please ener the first number: ";
		cin >> number1;

		cout << "Please ener the second number: ";
		cin >> number2;

		//Then the program should prompt the user to choose from a menu selection of five 
		//choices. 
		//The menu will allow you to 
		//add them together, 
		//subtract the second number from the first, 
		//multiply them together, 
		//divide the second number into the first number, 
		//and find the average of the two numbers. 
		cout << endl << "operation choices" << endl;
		cout << " + | add the two numbers together" << endl;
		cout << " - | subtract the second number from the first, " << endl;
		cout << " * | multiply the two numbers together" << endl;
		cout << " / | divide the second number into the first number, " << endl;
		cout << " A | find the average of the two numbers." << endl;
		cout << endl;
		cout << "Enter a symbol on the left to performt he operation onthe right :" << endl;
		cin >> oper;
		// 3 do calculations
		
		
		//switch(oper.at(1))
		//{
		//case "+":
		//cout << "add";
		//		break;
		//	
		//default:
		//	break;
		//}


		// 4 output results


			//cout << "output" ;

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