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
		//	insert comments here
		//
	
		// 1 declare variables we need
		
		const int kfredLength =5;
		const int kfredHeight =5;
		int fred[kfredHeight][kfredLength];
		string lastnames[][3] = // last array index must be listed or it wont accept it
		{
			{"z","x","c"},
			{"v","b","n"},
			{"a","s","d"},
			{"f","g","h"},
			{"j","k","l"},
		};
		
		for (int i = 0; i < kfredHeight; i++)
		{
			for (int j = 0; j < kfredLength; j++)
			{
				fred[j][i] = i * j;
			}
		}
// 2 get variables from user

		// 3 do calculations

		// 4 output results
		for (int i = 0; i < kfredHeight; i++)
		{
			for (int j = 0; j < kfredLength; j++)
			{
				cout << "    " << fred[j][i];
			}
			cout << endl;
		}


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