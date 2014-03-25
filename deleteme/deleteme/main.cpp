//created because I cannot create a default C++ templpate to start all my programs with
//i Proboably could but not when I am also using VS2012 for other classes

#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings
#include "..\..\businessLayer.h" // is numeric, string to double, string to int
#include "..\..\Collection.h" //aray stuffs


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
		int arr1[]={1,2,3};
		int arr2[]={3,4,5};
		int arr3[]={6,7,8};
		string arrays[]= {"arr1","arr2","arr3"};
		string output;
		// 2 get variables from user

		// 3 do calculations

		// 4 output results
		for each (output in arrays)
		{
			cout << output << endl;
			for (int i = 0; i < 2; i++)
			{
				//cout output[i]; // should be a pointer!
			}
		}
		cout << endl;
		cout << "output" << endl;

		cout << "\nPress any key to loop or q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}