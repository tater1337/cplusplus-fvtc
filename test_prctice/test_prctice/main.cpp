#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	int index=0;
	cout << "how many names";
	cin >> index;
	string *names= new string[index];
	for (int i = 0; i < index; i++)
	{
		cout <<"Name #"<<i+1 <<"?";
		cin >> names[i];
	}

	cout << "Name:";
	for (int i = index-1; i >= 0; i--)
	{
		cout << names[i];
		
		if (i>0)
		{
		cout << ", ";
		}
	}
	cout << endl;
	_getch();

	return 0;
}