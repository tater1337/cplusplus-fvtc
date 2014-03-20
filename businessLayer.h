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