#include <conio.h>		//used for getchar
#include <iostream>		//used for cin and cout
#include <iomanip>		//used to modify text strings setprecision
#include <string>		//needed for strings
#include "helperBot2.h" //include created header file, you can use relative or full paths.

using namespace std;

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
		

		cout << "\nPress any key to loop or q to quit" << endl;
		char c = _getch();
		if (c == 'q' || c == 'Q') quit = true;
		
	}
	return 1;
}