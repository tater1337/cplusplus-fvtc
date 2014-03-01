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

//initialize variables here


	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//Write a program that generates the following pattern. Use for loops to generate the 
		//patterns. All (*) should be printed by statements of the form cout << ‘*’; All blanks 
		//should be printed by statements of the form cout << ‘ ‘;
			
		// 1 declare variables we need
		string star= "*";
		string space=" ";
		// 2 no user input
		// 3 no calculations made
		// 4 output results
		cout << endl;
		cout << endl;
		for (int i = 0; i < 10; i++) //ten rows
		{
			//first column (compressed For's into single lines to ease readability)
			for (int j = 0; j < i+1; j++)		{cout << star;	} //output i+1 number of stars
			for (int k = 0; k < 10-i-1; k++)	{cout << space;	} //pad remaining with spaces (with off by one error)
			cout << space;
			//second column
			for (int j = 0; j < 10-i; j++)		{cout << star;	} //pad all - i with stars
			for (int k = 0; k < i; k++)			{cout << space;	} //pad remaining with spaces
			cout << space;
			//third column
			for (int k = 0; k < i; k++)			{cout << space;	} //output i number of spaces
			for (int j = 0; j < 10-i; j++)		{cout << star;	} //pad remaining with stars
			cout << space;
			// fourth column
			for (int k = 0; k < 10-i-1; k++)	{cout << space;	} //output all - i number of spaces (with off by one error)
			for (int j = 0; j < i+1; j++)		{cout << star;	} //pad remaining with stars
			cout << endl;
		}
		cout << endl;
		cout << "\nPress any key to loop or q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}