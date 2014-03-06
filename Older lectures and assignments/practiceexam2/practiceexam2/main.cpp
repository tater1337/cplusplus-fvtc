#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings
#include "otherlayer.h"

using namespace std;

double getsum(double, double, double);

int main()
{
	bool quit = false;

//initialize variables here

	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//	accepts 3 numbers
		//  returns a sum
		//
	
		// 1 declare variables we need
		string first, second, third;

		// 2 get variables from user
		do
		{
		cout << " enter a number: ";
		cin >> first;
		} while (!otherlayer::isNumeric(first));
		
		do
		{
		cout << " enter another number: ";
		cin >> second;
		} while (!otherlayer::isNumeric(second));
		
		do 
		{
		cout << " enter YET ANOTHER number: ";
		cin >> third;
		} while (!otherlayer::isNumeric(third));

		// 3 do calculations
		//calc is in function
		// 4 output results
		cout << "the sum is : " ;
		cout << getsum(otherlayer::ConvertToDouble(first), 
					   otherlayer::ConvertToDouble(second), 
					   otherlayer::ConvertToDouble(third)) 
					   << endl;
		
			
		cout << "\nPress any key to loop or q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}

double getsum(double x, double y, double z)
{
	return x + y + z;
}