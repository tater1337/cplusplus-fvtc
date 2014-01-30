#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

//	90378: Computer Programming C++ 90378
//	Tater Schuld	500139932
//
//You must include comments in your program. Demonstrate your program and 
//submit the printed source code.

	// 1 declare variables we need
	//Your program will have two variables, 
	//an int with a value of 32, 
	int firstnum = 32;

	//and a double with a value of 42.98765. 
	double secondnum = 42.98765;

	// 2 get variables from user
	//none

	// 3 do calculations
	//none
	
	// 4 output results
	//You will find and display the hex and octal values of the int with an 
	//explanation of your result.
	cout << "The hex of " << firstnum << " is " << hex << firstnum << endl;
	//hex is base 16 instead of base 10, octal is base 8
	cout << "The octal of " << dec << firstnum << " is " << oct << firstnum << endl;
	//After printing a blank line, 
	cout << endl;
	//you will format a display, setting the width of the double to 
	//10 positions and the decimal positions to 3 positions. Use a | to mark the beginning and 
	//end of the field.
	cout << setprecision(0) << fixed;

	cout << "|" << setw(10) << setprecision(3) << secondnum << setprecision(0) << "|" << endl;
	//You will repeat the formatting of the double as above using 4, 5, and 6 decimal positions.
	cout << "|" << setw(10) << setprecision(4) << secondnum << setprecision(0) << "|" << endl;
	cout << "|" << setw(10) << setprecision(5) << secondnum << setprecision(0) << "|" << endl;
	cout << "|" << setw(10) << setprecision(6) << secondnum << setprecision(0) << "|" << endl;

	//Finally you will display on one line (after a blank line) the int with a width of 5, the 
	//double with a width of 10 and 2 decimal positions.
	cout << endl;
	cout << "|" << setw(5) << dec << firstnum << "|" << setw(10) << setprecision(2) << secondnum << setprecision(0) << "|" << endl;

	cout << "\nPress any key to exit";
	_getch();
//Run this program first with the double as suggested. Then change the double to a 
//float. What happens??? Include an explanation as a comment. 
	// you get a warning about truncation of double to float. 
	// it appears that double is more precise than float and you lose/gain junk data in the conversion

	return 1;
}