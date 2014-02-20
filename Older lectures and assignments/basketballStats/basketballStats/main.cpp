#include <conio.h>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

//	90378: Computer Programming C++ 90378
//	Tater Schuld	500139932
//
//	insert comments here
//
	
// 1 declare variables we need
string team_name_1 = "badgers";
double win_1 = 17;
double loss_1 = 4;

string team_name_2 = "Golden Gophers";
double win_2 = 15;
double loss_2 = 6;

// 2 get variables from user
//none

// 3 do calculations
//done at output

// 4 output results


	cout << left << setw(15) << "team" << right << setw(10) << "win" << setw(10) << "loss" << setw(10) << "ave w/l" << endl;
	cout << fixed << setprecision(0);

	cout << left << setw(15) << team_name_1 << right << setw(10) << win_1 <<  setw(10) << loss_1 << setprecision(3) <<  setw(10) << loss_1/win_1 << setprecision(0) << endl;
	cout << left << setw(15) << team_name_2 << right << setw(10) << win_2 <<  setw(10) << loss_2 << setprecision(3) <<  setw(10) << loss_2/win_2 << setprecision(0) << endl;
	
	cout << "\nPress any key to exit";
	_getch();

	return 1;
}