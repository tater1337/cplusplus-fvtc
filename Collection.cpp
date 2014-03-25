#include "Collection.h"

// constructor
	Collection::Collection()
	{
		//set length to 0
		_length = 0;
		//create new array of lengh _length
		_data = new int[_length];
		//initialize the array
		
	}
	// destructor
	Collection::~Collection()
	{
		// frees up memory when instance leaves scope
		delete[] _data;
	}
	// getter for private length
	int Collection::Length()
	{
		return _length;
	}
	// returns a value in the index
	int Collection::GetValue(int index)
	{
		// add check to see if index past length
		return _data[index];
	}
	//adds a value to the end
	void Collection::add(int value)
	{
		//declare new array of length +1
		int *temp = new int[_length+1];
		//copy old array into new array
		for (int i = 0; i < _length; i++)
		{
			temp[i] = _data[i];
		}
		// add new value to end of array
		temp [_length] = value;
		// delete old aray to free up memory
		delete[] _data;
		//point _data to new array
		_data = temp;
		_length++;
	}

	ostream& operator<<(ostream &out, Collection &c)
	{
	cout <<"{";
	for (int i = 0; i < c.Length(); i++)
			{
				if (i>0) cout << ",";
				cout << c[i];
			}
	cout << "}"<< endl;
		return  out;
	}

	int Collection::operator[](int index)
	{
		return _data[index];
	}
