//created because I cannot create a default C++ templpate to start all my programs with
//i Proboably could but not when I am also using VS2012 for other classes

#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings

using namespace std;

int main()
{
	bool quit = false;
	int flavor = 0;
	string outputMessage = "";
	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//	insert comments here
		//
	
		// 1 declare variables we need


		// 2 get variables from user
		cout << "enter flavor" << endl;
		cout << "1. van" << endl;
		cout << "2. choc" << endl;
		cout << "3. straw" << endl;
		cout << "enter number: " ;
		cin >> flavor;

		// 3 do calculations
		switch (flavor)
		{
		case 1:
			outputMessage = "Vanilla";
			break;
		case 2:
			outputMessage = "Chocolate";
			break;
		case 3:
			outputMessage = "Strawberry";
			break;
		
		}
		// 4 output results

		cout << "output " << outputMessage << endl;

		cout << "\nPress any key to loop or q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}