#include <iostream>
using namespace std;


int main() {
	double inputNum;
	double area;
	double perimeter;
	cin >> inputNum;
	
	area = 3.141592653589793238463 * inputNum * inputNum;
	perimeter = 2 * 3.141592653589793238463 * inputNum;

	cout << area << endl;
	cout << perimeter << endl;
}
