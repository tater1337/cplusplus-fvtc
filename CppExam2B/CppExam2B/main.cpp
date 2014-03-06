
#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings and setprecision
#include <string>    //needed for strings

using namespace std;


int main()
{
	bool quit = false;

//initialize variables here
	double find_average(double, double, double);// prototype or should it be before main? I forgot. works anyway. looking in the book would know.
	while (quit == false)
	{
		cout << endl; //to clean up the subsequent iterations of the while loop(i'd stick a (clear screen) here)
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//Be sure to include appropriate comments.
		//Submit your completed solution to Github and on Blackboard. Be sure to write the folder name 
		//of your solution in the Blackboard comments.
		
		//**********************************
		//Comment your code to indicate if you did not use your book. (2 bonus points)
		//**********************************
		
		//
	
		// 1 declare variables we need
		double num1 = 0;
		double num2 = 0;
		double num3 = 0;
		double answer = 0;

		// 2 get variables from user
		//Write a C++ program that displays the following prompts:
		//After each prompt is displayed, your program should allow input data from the keyboard for the 
		//displayed prompt. 
		
		cout << "Enter a number: ";
		cin >> num1;
		
		//Enter a second number:
		cout << "Enter a second number: ";
		cin >> num2;
		
		//Enter a third number:
		cout << "Enter a third number: ";
		cin >> num3;
		
		// 3 do calculations
		//After the third number has been entered, your program should call a function 
		//called find_average (by value) to calculate the average of the three numbers. 
		answer = find_average(num1,num2,num3);
		
		// 4 output results
		//This value should be displayed from the main function (including an appropriate message).
		//Display the result with 1 decimal point precision.
		
		cout << endl;
		cout << "The average of " << num1 << " and " << num2 << " and "<< num3 << endl;
		cout << setprecision(1) << fixed << answer << endl;

		//Allow the user to repeat this process as many times as they want. You must specify steps to end 
		//the application!
		
		cout << "\nPress any key to repeat or q to quit";
		char c = _getch();

		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}

// function 
// called find_average (by value) to calculate the average of the three numbers.
// could have been put in helperbot/businesslayer/mathfuncions *IF* it was called more than once OR was more complex
double find_average(double a, double b, double c) //not by value or (double a&
{
 return (a+b+c)/3;
}