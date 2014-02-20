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


	while (!quit)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//Write a program that begins with a request that the user enter two numeric values. 

		//Then the program should prompt the user to choose from a menu selection of five choices. 

		//The menu will allow you to add them together, 
		//subtract the second number from the first, 
		//multiply them together, 
		//divide the second number into the first number, 
		//and find the average of the two numbers. 

		//The results will be displayed on the screen (with an appropriate explanation). 

		//After the users releases control, control is then sent 
		//back request two new numbers. 

		//Somewhere in the program, allow the user to quit the application

		//Be sure to include an explanation to the user of what the program is to accomplish.

		//The program will check selections for a valid range of values for menu selection. An 
		//invalid selection should result in notifying the user of the error and requesting the user 
		//to resubmit their choice. 
		//
	
		// 1 declare variables we need
		
		// 2 get variables from user

		// 3 do calculations

		// 4 output results

			cout endl << "output" << endl;


	
		cout << "\nPress any key to loop or q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}