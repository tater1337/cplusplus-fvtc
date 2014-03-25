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
//void prettyprint(Collection c);
void tempCollectionTest();
int main()
{
	bool quit = false;

	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		//	insert comments here
		//
	
		// 1 declare variables we need
		Collection c;
		c.add(5);
		c.add(7);
		c.add(4);
		c.add(3);
		c.add(2);
		c.add(1);

		cout << "length of collection: " << c.Length() << endl;

		cout << c << endl;

		cout << "element at 0: " << c[0] << endl;
		tempCollectionTest();
		//out( c);

		// 2 get variables from user

		// 3 do calculations

		// 4 output results
		cout << endl;
		cout << "output" << endl;

		cout << "\nPress any key to loop or q to quit";
		char x = _getch();
		if (x == 'q' || x == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}

//void prettyprint(Collection c)
//{
//	cout <<"{";
//	for (int i = 0; i < c.Length(); i++)
//			{
//				if (i>0) cout << ",";
//				cout << "index" << c.GetValue(i) << endl;
//			}
//	cout endl;
//}

void tempCollectionTest()
{
	Collection temp;
	for (int i = 0; i < 50; i++)
	{
		temp.add(55);
	}
}