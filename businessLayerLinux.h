#ifndef BUSINESSLAYER_H_INCLUDED
#define BUSINESSLAYER_H_INCLUDED

#include <string>

using namespace std;

class businessLayer
{
private:


public:
	static bool isNumeric(string);
	static int convertToInt(string);
	static double ConvertToDouble(string);
	static string tocurrency(double value);
};

#endif //BUSINESSLAYER_H_INCLUDED
