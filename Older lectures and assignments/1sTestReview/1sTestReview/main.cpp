#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int cats = 0;
	double CostPerCat = 0;
	double Total = 0;

	cout << "test";
	cout << "How many cats would you like" << endl;
	cin >> cats;
	cout << endl;
	cout << "what is the cost per cat? " << endl;
	cin >> CostPerCat;
	Total = CostPerCat * cats;
	cout << endl;
	cout << "You owe : $"  << setprecision(2) << fixed << Total << endl;

	cin >> cats;
	return 1;
}
