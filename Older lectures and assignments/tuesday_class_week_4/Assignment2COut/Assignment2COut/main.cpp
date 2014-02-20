#include <conio.h>
#include <iostream>

using namespace std;


int main()
{

//	Write a C++ program to output the following verse to the monitor.
//	Note: the verse must be aligned this way. You must include comments in your program. 
//	Demonstrate your program and submit the printed source code.
//
//	Computers, computers everywhere
//	 as far as I can C.
//	I really, really like these things.
//	 Oh joy. Oh joy for me!
	
	cout << "Computers, computers everywhere\n";
	cout << "  as far as I can C.\n";
	cout << "I really, really like these things.\n";
	cout << "  Oh joy. Oh joy for me!\n";

	cout << "\nPress any key for the next verse\n";
	_getch();

	//extra credit
	cout << "\n";
	cout << "Bugs, Bugs everywhere\n";
	cout << "  Riddled within my code.\n";
	cout << "How I hate to debug those things.\n";
	cout << "  They make me feel quite old!\n";
		
	cout << "\nPress any key to exit";
	_getch();

	return 1;
}