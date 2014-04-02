#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings
#include "..\..\businessLayer.h" // is numeric, string to double, string to int
#include "..\..\Collection.h" //aray stuffs

using namespace std;
//initialize functions here
//Declare a single-structure data type suitable for an employee record of the type 
//illustrated.
struct Employee
{
	int number;
	string name;
	double rate;
	double hours; // could be int, shouldn't be
};
int main()
{
	bool quit = false;

	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//

		// 1 declare variables we need
		// test data
		
		double grossPayTotal = 0;
		Collection<Employee> Employees;
				
		Employee Unit;
		Unit.number = 3462;
		Unit.name = "Jobs";
		Unit.rate = 4.62;
		Unit.hours = 40;

		Employees.add(Unit);

		Unit.number = 6793;
		Unit.name = "Hooper";
		Unit.rate = 5.83;
		Unit.hours = 38;

		Employees.add(Unit);
		// 2 get variables from user
		//Using the data type defined write a C++ program that interactively accepts the data into an array. 
		//Be sure to use proper screen control to allow each employee to be entered on a clearly defined space. 
		//Do not allow your input to run together.

		//Note: you will probably need to determine a maximum number of employees allowed, 
		//and make sure your program does not go past that limit. You may (for 5 extra credit 
		//points on this assignment) dynamically allocate memory as it is needed.
		//loop until done

		cin >> Unit.number;
		cin >> Unit.name;
		cin >> Unit.rate;
		cin >> Unit.hours;

		Employees.add(Unit);
		
		
		// 3 do calculations
		//loop through calculations
		double *grossPay = new double[Employees.Length()];
		for (int i = 0; i < Employees.Length(); i++)
		{
			Employee tempEmployee = Employees[i];
			grossPay[i] = tempEmployee.hours * tempEmployee.rate;
			grossPayTotal += grossPay[i];
		}
		
		// 4 output results
		//Once the data has been entered, the program should create a payroll report listing each 
		//employee’s number, name and gross pay. 
		//Include the total grass pay for all employees at the end of the report.

		//loop through outputs
		for (int i = 0; i < Employees.Length(); i++)
		{
			Employee tempEmployee = Employees[i];
			cout << tempEmployee.name << endl;
			cout << grossPay[i] << endl;

		}
		cout << grossPayTotal << endl;
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