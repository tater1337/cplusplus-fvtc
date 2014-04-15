#include <iostream>
using namespace std;


template < class T>
class Collection
{
private:
	T* _data;
	int _length;

public:
	// constructor
	Collection();
	// destructor
	~Collection();
	// getter for private length
	int Length();
	// returns a value in the index
	T GetValue(int index);
	//adds a value to the end
	void add(T value);

	T& operator[](int);
	//friend ostream& operator<<(ostream&, Collection<T>&);

};

// constructor
template <class T>
	Collection<T>::Collection()
	{
		//set length to 0
		_length = 0;
		//create new array of lengh _length
		_data = new T[_length];
		//initialize the array

	}
	// destructor
template <class T>
	Collection<T>::~Collection()
	{
		// frees up memory when instance leaves scope
		delete[] _data;
	}
	// getter for private length
	template <class T>
	int Collection<T>::Length()
	{
		return _length;
	}
	// returns a value in the index
	template <class T>
	T Collection<T>::GetValue(int index)
	{
		// add check to see if index past length
		return _data[index];
	}
	//adds a value to the end
template <class T>
	void Collection<T>::add(T value)//int value)
	{
		//declare new array of length +1
		T *temp = new T[_length+1];
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
template <class T>
	ostream& operator<<(ostream &out, Collection<T> &c)
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
template <class T>
	T& Collection<T>::operator[](int index)
	{
		return _data[index];
	}
