#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings
#include "..\..\businessLayer.h" // is numeric, string to double, string to int
#include "..\..\Collection.h" //aray stuffs <<< I DON'T THINK I NEED THIS

using namespace std;


int main()
{
	bool quit = false;

	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//Be sure to include appropriate comments and output to the end user to explain the functionality of the program.
		//
		//Extra Credit (up to 10 points) Write these numbers (using the same formatting) out to a text file. 
		// not sure you want me to google file IO to figure this out, but I could have.
	
		// 1 declare variables we need
		int numberIndex=0;
		double numbersTotal=0;
		// 2 get variables from user
		//where N is an integer value also input by the user.  
		bool indexIsNumber = false;  //bool test for !isNAN for index
		while (!indexIsNumber)// loop until entry is successful
		{
			string userInput = "";
			cout << "Enter the ammount of numbers you want to enter to the array: " ;
			cin >> userInput;
			// test if numeric
			if (businessLayer::isNumeric(userInput))
			{
				indexIsNumber = true;
				numberIndex = businessLayer::ConvertToDouble(userInput);
			}
			else
			{
				indexIsNumber = false;
			}
		}
		cout << endl;
		double *numbers = new double[numberIndex];//because 3.5 is a number
		//Write a C++ program that will ask for N numbers to be put into a 1 dimensional integer array, 
		for (int i = 0; i < numberIndex; i++)
		{
			bool inputIsNumber = false; //bool test for !isNAN for entry
			while (!inputIsNumber)// loop until entry is successful
			{
				string userInput = "";
				cout << "enter a number: ";
				cin >> userInput;
				//test if numeric
				if (businessLayer::isNumeric(userInput))
				{
					inputIsNumber = true;
					//store these numbers in an array 
					numbers[i] = businessLayer::ConvertToDouble(userInput);
				}
				else
				{
					inputIsNumber = false;
				}
			}
		}
		

		// 3 do calculations
		//calculate and display the total, 
		cout << endl;
		for (int j = 0; j < numberIndex; j++)
		{
			numbersTotal += numbers[j];
		}
		// 4 output results
		//and display the numbers in reverse order.
		// you didn't give us a format except what was on the board
		cout << "Numbers in reverse order" << endl;
		cout << endl;
		cout << "{";
		for (int k = numberIndex-1; k >= 0; k--)
		{
			cout << numbers[k];
			if (k > 0) cout << ",";
		}
		cout << "}" << endl;
		cout << endl;
		cout << "Total: " << numbersTotal;
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