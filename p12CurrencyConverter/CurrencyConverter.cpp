#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

int main() 
{
	map<string, double> currencies = { {"USD", 1.79549 }, {"EUR", 1.95583 }, {"GBP", 2.53405 }, {"BGN", 1} };
	double value;
	string inputCurrency;
	string outputCurrency;

	cin >> value >> inputCurrency >> outputCurrency;
	double valueToBGN;
	valueToBGN = value * currencies[inputCurrency];

	double result = valueToBGN / currencies[outputCurrency];

	cout << setprecision(2) << fixed << result << " " << outputCurrency << endl;
	/*if (inputCurrency == "USD")
	{
		valueToBGN = value * currencies[inputCurrency];
	}
	else if (inputCurrency == "EUR") 
	{
		valueToBGN = value * currencies[inputCurrency];
	}
	else if (inputCurrency == "GBP") 
	{
		valueToBGN = value * currencies[inputCurrency];
	}
	else
	{
		valueToBGN = value;
	}

	double result;

	if (outputCurrency == "USD")
	{
		result = valueToBGN / currencies[outputCurrency];
	}*/
}