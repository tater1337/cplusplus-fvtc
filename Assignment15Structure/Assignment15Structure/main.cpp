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
		double grossPayTotal = 0;
		string typeDesc[4] = {"Number","Name","Rate","Hours"};
		Collection<Employee> Employees;
		Employee Unit;
		
		// test data ***************************************************************
		//				
		//Unit.number = 3462;
		//Unit.name = "Jobs";
		//Unit.rate = 4.62;
		//Unit.hours = 40;

		//Employees.add(Unit);

		//Unit.number = 6793;
		//Unit.name = "Hooper";
		//Unit.rate = 5.83;
		//Unit.hours = 38;

		//Employees.add(Unit);
		
		//end test data *************************************************************

		// 2 get variables from user
		//Using the data type defined write a C++ program that interactively accepts the data into an array. 
		//Be sure to use proper screen control to allow each employee to be entered on a clearly defined space. 
		//Do not allow your input to run together.

		//Note: you will probably need to determine a maximum number of employees allowed, 
		//and make sure your program does not go past that limit. You may (for 5 extra credit 
		//points on this assignment) dynamically allocate memory as it is needed.
		
		//loop until done
		// there must be a way to make this into a for each loop.....I'm gonna try (dammit)
		bool ExitDataEntry = false;
		
		while (ExitDataEntry == false)
		{	
			// i should put type checking loops arounf all of these, or add a funtion to helperbot to complete re-do cin so type errors are checked
			cout << "Enter Employee " << typeDesc[0] << " or 0 to continue: "; //there should be a Q to quit and X to exit
			cin >> Unit.number;  //won't let me use Unit.typeDesc[i]   :(
			if (Unit.number != 0)
			{
			cout << "Enter Employee " << typeDesc[1] << ": ";
			cin >> Unit.name;
			cout << "Enter Employee " << typeDesc[2] << ": ";
			cin >> Unit.rate;
			cout << "Enter Employee " << typeDesc[3] << ": ";
			cin >> Unit.hours;
			cout << endl;
			Employees.add(Unit);
			}
			else
			{
				ExitDataEntry = true;
			}
		}	
		
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
		cout << endl;
		cout << endl;
		cout << "Payroll Report" << endl;
		cout << endl;
		cout << typeDesc[0] << setw(9) << typeDesc[1] << setw(11) << "Gross pay" << endl;
		cout << setprecision(2) << fixed;
		for (int i = 0; i < Employees.Length(); i++)
		{
			Employee tempEmployee = Employees[i];
			cout << tempEmployee.number;
			cout << setw(11) << tempEmployee.name;
			cout << setw(11) << grossPay[i] << endl;

		}
		cout << endl;
		cout << "Gross pay total" << setw(11) << grossPayTotal << endl;
		cout << endl;

		cout << "\nPress any key to loop or Q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}