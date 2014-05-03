#include <conio.h>   //used for getchar
#include <iostream>  //used for cin and cout
#include <iomanip>   //used to modify text strings setprecision
#include <string>    //needed for strings
#include <sstream>    // to convert douvbles to strings
#include "..\..\businessLayer.h" // is numeric, string to double, string to int

using namespace std;

class Rectangle//Create a class named Rectangle
{
private: // contains length and width data members
	double length;
	double width;

public:
		//The member functions of the class Rectangle should include a 
		//constructor, setrec, tostring (or showrec), area, and perimeter. (area 
		//and perimeter should return a value) 
	
	Rectangle(); //constructor
	void setrec(double l, double w); // function to set the values
	string showrec(); //Note that the purpose of the tostring (or showrec) method is to display the data members. 
	double getPerimeter(); // function to calculate perimeter. Formula: (2*length+ 2*width)
	double getArea(); //The formula for area is (l*w)
	double getLength();
	double getWidth();
	

}; // end of class

	Rectangle::Rectangle()
	{
		length=0;
		width=0;
	}
	
	void Rectangle::setrec(double l, double w)
	{
		length=l;
		width=w;
		return;
	}

	string Rectangle::showrec() //you didnt show us this method
	{
		std::stringstream s;
		s << "(" << length << "," << width << ")";
		return s.str();		//return " " + length + ", " + width;
	}

	double Rectangle::getPerimeter()
	{
		return (length + width)*2;
	}
	double Rectangle::getArea()
	{
		return length * width;
	}
	double Rectangle::getLength()//extra credit
	{
		return length;
	}
	double Rectangle::getWidth()//extra credit
	{
		return width;
	}
	

int main()
{
	bool quit = false;

	while (quit == false)
	{
		//	90378: Computer Programming C++ 90378
		//	Tater Schuld	500139932
		//
		
		// 
		//Note that the purpose of the tostring (or showrec) method is to display the data 
		//members. 
		
		//Include this class in a working C++ program that allows the end user to enter 
		//the dimensions of the rectangle object. Be sure to include appropriate output to 
		//the user to clearly identify the purpose of the program. The program will use the 
		//class to calculate and display the area and perimeter by using the methods 
		//defined in the class. The area and perimeter methods should be called from 
		//main. 
		
		
	
		// 1 declare variables we need
		Rectangle thisRectangle;
		string inputlength = "";
		string inputwidth = "";
		double setlength = 0;
		double setwidth = 0;
		// 2 get variables from user
		cout << endl;
		do
		{
		cout << " enter length of rectangle: ";
		cin >> inputlength;
		} while (!(setlength = businessLayer::ConvertToDouble(inputlength)));
		
		do
		{
		cout << " enter width of rectangle: ";
		cin >> inputwidth;
		} while (!(setwidth = businessLayer::ConvertToDouble(inputwidth)));


		thisRectangle.setrec(setlength,setwidth);
		// 3 do calculations
		//done in class rectangle?

		// 4 output results
		cout << endl;
		cout << " area of rectangle: " << thisRectangle.getArea() << endl;
		cout << " perimeter of rectangle: " << thisRectangle.getPerimeter() << endl;
		cout << " Dimensions of rectangle: " << thisRectangle.showrec() << endl;
		cout << endl;
		//display rectangle? extra credit
		if (thisRectangle.getLength() < 15 &&thisRectangle.getWidth() < 75)// display *IF* rectangle not too big
		{
			for (int i = 0; i < thisRectangle.getLength(); i++)
			{
				for (int j = 0; j < thisRectangle.getWidth(); j++)
				{
					cout << "*";
				}
				cout << endl;
			}
		}
		else
		{
			cout << " too big to display graphically"<< endl;
		}

		cout << endl;

		cout << "\nPress any key to loop or q to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 1;
}