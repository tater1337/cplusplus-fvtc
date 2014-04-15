#include "businessLayer.h"

double businessLayer::ConvertToDouble(string s)
{
  //holds running total
	double total = 0;
	bool decimal_point_found = false;
	bool is_negative = false;
	int exp = s.length() - 1;

	//test if contains decimal point first
	for (int i = 0; i  < s.length(); i++)
	{
		char c = s[i];
		if (c == '.')
		{
			decimal_point_found = true;
		}
		//if contains a decimal point, then account for string length
		if (decimal_point_found)
		{
			exp--;
		}
	}
	//loop through word
	for (int i = 0; i  < s.length(); i++)
	{
		char c = s[i];
		//temporary value for 1s, 10s, 100s, etc.
		int value = 0;
		//translate character to integer value
		if (c == '-')
		{
			is_negative = true;
		}
		else if (c == '0')
		{
			value = 0;
		}
		else if (c == '1')
		{
			value = 1;
		}
		else if (c == '2')
		{
			value = 2;
		}
		else if (c == '3')
		{
			value = 3;
		}
		else if (c == '4')
		{
			value = 4;
		}
		else if (c == '5')
		{
			value = 5;
		}
		else if (c == '6')
		{
			value = 6;
		}
		else if (c == '7')
		{
			value = 7;
		}
		else if (c == '8')
		{
			value = 8;
		}
		else if (c == '9')
		{
			value = 9;
		}
		//if contains a decimal point, then start 0.1, 0.01, etc.
		if (c == '.')
		{
			exp = -1;
		}
		else
		{
			//add the current value times it's place (1s, 10s, 100s, etc) to the
			//	running total
			//	use pow(10 ^ 0) instead of (10 ^ 1)
			//	pow(10 ^ 0) = 1 DOES NOT EQUAL (10 ^ 0) = 10
			double temp =  (value * pow(10, exp));
			total +=  temp;
			//increment exponent for following iteration
			exp--;
		}

	}
	if (is_negative)
	{
		total *= -1;
	}
	return total;

}

//returns true if string is numeric value
bool businessLayer::isNumeric(string s)
{
	bool success = true;
	bool decimal_point_found = false;
	//start at end of string (1's place).
	for (int i = s.length() - 1; i >= 0; i--)
	{
		//get the digit
		char c = s[i];
		//look for characters 0-9
		if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4'
			|| c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
		{
			success = true;
		}
		else if (c == '.')
		{
			if (!decimal_point_found)
			{
				decimal_point_found = true;
			}
			else
			{
				//if decimal point found already, then not a valid number
				success = false;
			}
			//if decimal is at end of string not valid number
			if (i == s.length() - 1)
			{
				success = false;
			}
		}
		else if (c == '-')
		{
			if (i > 0)
			{
				success = false;
			}
		}
		else
		{
			//if 0-9 not found then set success to false and break from for loop
			success = false;
		}
		if (!success)
		{
			break;
		}
	}
	return success;
}


int businessLayer::convertToInt(string value)
{
int total = 0;
	//loop through string
	for (int i = 0; i < value.length(); i++)
	{
	//read character, convert to digit
		int digit = 0;
		switch(value[i])
		{
		case '9':
			digit++;
		case '8':
			digit++;
		case '7':
			digit++;
		case '6':
			digit++;
		case '5':
			digit++;
		case '4':
			digit++;
		case '3':
			digit++;
		case '2':
			digit++;
		case '1':
			digit++;
			break;
		}
		//int number = digit * 10 ^ (value.length() - (i + 1));
		//there is a way to do this without pow,  loop thru length and *= 10
		int number = digit * pow(10, value.length() - (i + 1));
 		//add number to total
		total += number;
	}
	//return total
	return total;
}


string businessLayer::tocurrency(double value)
{
	string output = "";
	char temp[100];
	// like tostring()  - print format to char array
	sprintf_s(temp, "$%0.2f",value);
	output = temp ;
	return output;
}
