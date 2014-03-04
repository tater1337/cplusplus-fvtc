#include <conio.h>		//used for getchar
#include <iostream>		//used for cin and cout
#include <iomanip>		//used to modify text strings setprecision
#include <string>		//needed for strings
#include "helperBot2.h" //include created header file, you can use relative or full paths.

using namespace std;

bool tryparse(string,int&); //accept a sting and in by reference

int main()
{
	bool quit = false;

	while (!quit)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//	insert comments here
		//
	cout << " please enter a number: ";
	string user_input;
	int number = 35;
	cin >> user_input;

	if (tryparse(user_input, number))
	{
		cout << endl << " you entered:" << number << endl;
	}
	else
	{
		cout << endl << " that is not a number " << endl;
	}
	

		cout << "\nPress any key to loop or q to quit" << endl;
		char c = _getch();
		if (c == 'q' || c == 'Q') quit = true;
		
	}
	return 0;
}

bool tryparse(string input, int& Value)
{
	bool success = helperBot2::isNumeric(input);
	return success;
	if (success)
	{
		Value = helperBot2::convertToInt(input);
	}
	else
	{
			Value = 0;// value tof boolean fail
	}
	return false;
}