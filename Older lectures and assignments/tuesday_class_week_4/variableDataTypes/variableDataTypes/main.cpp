#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num = -5;
	int num2 = 7;
	bool success = true;
	double miles = 5.256;
	string hello = "hello";
	char c = 'y';

	cout << "num = "<< num << endl;
	cout << "success = " << success << endl;
	cout << "miles = " << miles << endl;
	cout << "hello = " << hello << endl; // string output needs #include <string>
	cout << "c = " << c << endl;
	cout << "num plus num2 equals " << num + num2 << endl;


	_getch();
		
	_getch();

	return 1;
}