#include "Collection.h"

// constructor
	Collection::Collection()
	{
		//set length to 1
		_length = 1;
		//create new array of lengh _length
		_data = new int[_length];
		//initialize he array
		_data[0] = 0;
	}
	// destructor
	Collection::~Collection()
	{

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

	}
