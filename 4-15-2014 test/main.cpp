//created because I cannot create a default C++ templpate to start all my programs with
//i Proboably could but not when I am also using VS2012 for other classes

#include <stdio.h>   //used for getchar not in codeblocks?
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings
#include <math.h>
#include "businessLayerLinux.h" // is numeric, string to double, string to int
#include "CollectionLinux.h" //aray stuffs

using namespace std;
//initialize functions here
int main()
{
	bool quit = false;

	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//	insert comments here
		//

		// 1 declare variables we need


		// 2 get variables from user

		// 3 do calculations
		c.add(1);
		c.add(2);
		cout << c;

		// 4 output results
		cout << endl;
		cout << "output" << endl;

		cout << "\nPress any key to loop or q to quit";
        //char c = _getch();
		char c = 'q';
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}
