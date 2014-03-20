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
string printArray(int arr[], int l);
string tocurrency(double value);

int main()
{
	bool quit = false;
	Collection c;
	cout << " collection: " << c.GetValue(0);



	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//	insert comments here
		//
	
		// 1 declare variables we need
		//static aray
		int length = 7;
		int stuff[] = {6,7,8,9,10};
		
		// how to create a dynamic array
		int* numbers = new int[length];
		numbers[0] = 6;
		numbers[1] = 7;
		numbers[2] = 8;
		numbers[3] = 9;
		numbers[4] = 10;
		numbers[5] = 11;
		numbers[6] = 12;
		// how to change the size fo the array
		
		
		int numbersLen = 5;
		double ammount = 9.99;
		// 2 get variables from user

		// 3 do calculations

		// 4 output results
		string output = printArray(stuff,numbersLen);
		//cout << tocurrency(ammount) << endl;
		cout << output;
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
string tocurrency(double value)
{
	string output = "";
	char temp[100];
	// like tostring()  - print format to char array
	sprintf_s(temp, "$%0.2f",value); 
	output = temp ;
	return output;
}


string printArray(int arr[], int l)
{
	string output = "";
	char temp[10] = "";
	output += "{";
	for (int i = 0; i < l; i++)
		{
			// like tostring()  - print format to char array
			sprintf_s(temp, "%i",arr[i]); 
			output += temp ;
			if (i < l -1)
			{
				output += ",";
			}
		}
		output += "}";
		return output;
}