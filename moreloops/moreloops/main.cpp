//created because I cannot create a default C++ templpate to start all my programs with
//i Proboably could but not when I am also using VS2012 for other classes

#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings


using namespace std;

void forLoopTest();
void whileLoopTest();
void doWhileLoopTest();

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


		// 2 get variables from user

		// 3 do calculations

		// 4 output results
		forLoopTest();
		cout << endl;
		whileLoopTest();
		cout << endl;
		doWhileLoopTest();

		
		cout << endl;
		cout << "output" ;


	
		cout << "\nPress any key to loop or q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}

void forLoopTest()
{
	string output = "*";
	for (int i = 0; i < 4; i++)
	{
		cout << output << endl;
		output = output + "*";
	}
}

void whileLoopTest()
{
	string output = "*";
	int i =0;
	while (i<4)
	{
		cout << output << endl;
		output = output + "*";
		i++;
	}
}

void doWhileLoopTest()
{
	string output = "*";
	int i =0;
	do
	{
		cout << output << endl;
		output = output + "*";
		i++;
	} while (i<4);
}

