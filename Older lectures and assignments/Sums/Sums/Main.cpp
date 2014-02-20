#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double number1 = 3.67899; 
	double number2 = 7;
	double number3 = 11;
	double sum = 0;
	double average=0;
	double product = 0;
	double exponent = 0;
	double modulus = 0;

	cout << "number1 = "<< number1 << endl;
	cout << "number2 = "<< number2 << endl;
	cout << "number3 = "<< number3 << endl;
	sum = number1 + number2 + number3;
	
	average = sum /3;
	product = number1 * number2 * number3;
	exponent = pow(number1,number2);
	modulus = 5%2; //only works with int variables

	// cout << setprecision(2) sets precision to number of digits ex 2.35 = 2.3 it also rounds
	cout << setprecision(2) << fixed; //fixed forces precision to the decimal point  - used to show precision to x decimal places
	//reset fxed with cout << resetiosflags(ios::fixed);
	
	cout << "sum = "<< sum << endl;
	cout << "average = "<< average << endl;
	cout << "product = "<< product << endl;
	cout << "exponent = "<< exponent << endl;
	cout << "modulus = "<< modulus << endl;
	_getch();
	
	return 0;
}