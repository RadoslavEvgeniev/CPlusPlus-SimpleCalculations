#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

int main() {
	double x1;
	double y1;
	double x2;
	double y2;
	double sideA;
	double sideB;
	double area;
	double perimeter;

	cin >> x1 >> y1 >> x2 >> y2;

	sideA = (abs)(x1 - x2);
	sideB = (abs)(y1 - y2);
	
	area = sideA * sideB;
	perimeter = 2 * (sideA + sideB);

	cout << area << endl;
	cout << perimeter << endl;
}