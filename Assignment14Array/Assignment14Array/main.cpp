//created because I cannot create a default C++ templpate to start all my programs with
//i Proboably could but not when I am also using VS2012 for other classes

#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings
#include "..\..\businessLayer.h" // is numeric, string to double, string to int
#include "..\..\Collection.h" //aray stuffs


using namespace std;

// initialize local functions here


int main()
{
	bool quit = false;

	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		// 
		// 
		// 
		//You must include comments in your program. Demonstrate your program and submit 
		//the printed source cod
		//
	
		// 1 declare variables we need
		const int kRow = 2;
		const int kCol = 3;
		//All the arrays should have 2 rows and 3 columns. The first two arrays should be 
		//initialized as follows: 
		// 
		// First		Second 
		// 16 18 23		14 52 77 
		// 54 91 11		16 19 59 
		int First[kRow][kCol] = 
		{
			{16,18,23},
			{54,91,11}
		};
		int Second[kRow][kCol] = 
		{
			{14,52,77},
			{16,19,59}
		};
		int sum[kRow][kCol];
		// 2 get variables from user

		// 3 do calculations
		//Note: you must sum and print the arrays in a loop, not hardcoded!! 
		for (int i = 0; i < kRow; i++)
		{
			for (int j = 0; j < kCol; j++)
			{
				sum[i][j] = First[i][j] + Second[i][j];
			}
		}
		// 4 output results
		//Display all three arrays as part of your output(in row/column format) , along with 
		//appropriate messages to the end user to describe what is happening. 
		
		cout << "First array" << endl;
		cout << endl;
		for (int i = 0; i < kRow; i++)
		{
			cout << "Row " << i+1 << "  ";
			for (int j = 0; j < kCol; j++)
			{
				cout << First[i][j];
				if (j < kCol -1)
				{
					cout << " , ";
				}
			}
			cout << endl;
		}
		cout << endl;

		cout << "Second array" << endl;
		cout << endl;
		for (int i = 0; i < kRow; i++)
		{
			cout << "Row " << i+1 << "  ";
			for (int j = 0; j < kCol; j++)
			{
				cout << Second[i][j];
				if (j < kCol -1)
				{
					cout << " , ";
				}
			}
			cout << endl;
		}
		cout << endl;
		cout << "Sums of the items in the First and Second array" << endl;
		cout << endl;
		for (int i = 0; i < kRow; i++)
		{
			cout << "Row " << i+1 << "  ";
			for (int j = 0; j < kCol; j++)
			{
				cout << sum[i][j];
				if (j < kCol -1)
				{
					cout << " , ";
				}
			}
			cout << endl;
		}
		cout << endl;


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