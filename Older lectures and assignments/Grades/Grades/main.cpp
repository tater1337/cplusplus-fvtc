//created because I cannot create a default C++ templpate to start all my programs with
//i Proboably could but not when I am also using VS2012 for other classes

#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings

using namespace std;

int main()
{

	//	90378: Computer Programming C++ 90378
	//	Tater Schuld	500139932
	//
	//	insert comments here
	//
	
	// 1 declare variables we need
	double grade = 0;
	string letter = "";
	bool quit = false;
	
	while (quit == false)
	{
		// 2 get variables from user
		cout << " enter score :";
		cin >> grade;

		// 3 do calculations
		if (grade < 60)
		{
			//if less than 60 run this code
			letter = "F";
		}
		else if (grade < 70)
		{
			letter = "D";
		}
	
		else if (grade < 80) letter = "C"; // brackets needed only for multi lines of code, and can be mixed

		else if (grade < 90)
		{
			letter = "B";
		}
		else 
		{
			letter = "A";
		}


		// 4 output results
	
		cout << "you got an : "<< letter << endl;
		
		cout << "\nPress q to exit" <<endl;
		char c = _getch();
		if (c == 'q' || c == 'Q') 
		{
			quit = true;
		}
		
	}
	return 0;
}