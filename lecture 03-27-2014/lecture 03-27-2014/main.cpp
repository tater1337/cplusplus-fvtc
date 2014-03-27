//created because I cannot create a default C++ templpate to start all my programs with
//i Proboably could but not when I am also using VS2012 for other classes

#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings
#include "..\..\businessLayer.h" // is numeric, string to double, string to int
#include "..\..\Collection.h" //aray stuffs


using namespace std;
//initialize functions here
struct Student
{
	string FirstName;
	string LastName;
	int credits;
};

int main()
{
	Student jeff;
	jeff.FirstName ="jeff";
	jeff.LastName = "richards";
	jeff.credits = 27;
	
	Collection<Student> students;
	students.add(jeff);

	for (int i = 0; i < students.Length(); i++)
	{
		Student tempStudent = students[i];
		cout << tempStudent.LastName << ", " << tempStudent.FirstName << endl;
	}


	Collection<string> names;
	names.add("rick");
	names.add("tony");
	names.add("susan");
	
	
	
	Collection<int> c;
	bool quit = false;

	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//	insert comments here
		//
	
		// 1 declare variables we need


		// 2 get variables from user

		// 3 do calculations

		// 4 output results
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