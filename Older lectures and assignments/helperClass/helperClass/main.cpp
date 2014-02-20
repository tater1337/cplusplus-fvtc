#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings
#include "helperBot.h" //include created header file, you can use relative or full paths.

using namespace std;

int main()
{
	bool quit = false;

//initialize variables here


	while (!quit)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//	insert comments here
		//
	
		cout << endl << "please enter a number: ";
		string input = "";
		cin >> input;
		if (helperBot::isNumeric(input))
		{
			cout << endl << "good job" << endl;
			cout << endl << "you entered " << helperBot::convertToInt(input) << endl;
		}
		else
		{
			cout << endl << "that's not a number" << endl;
		}
		

		cout << "\nPress any key to loop or q to quit" << endl;
		char c = _getch();
		if (c == 'q' || c == 'Q') quit = true;
		
	}
	return 1;
}