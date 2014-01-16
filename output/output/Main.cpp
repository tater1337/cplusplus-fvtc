#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int num = 28; // declare interger vaiable
	cout << num; //does not need .ToString like c#
	cout << " the number is :" << num << "." << endl; //instead of concatenating with + like in c#
	cout << "working" << endl;
	cout << "this is a lot of work to display a block of" << endl;
	cout << "text\n";
	// \ is an escape charater
	// \n is a constrol character, does same as endl
	// \t is a  tab character
	cout << "this\tis\ttabbed\ttext" << endl; 

	_getch();
	return 1;
}