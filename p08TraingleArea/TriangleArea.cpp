#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
int main() {
	double side;
	double height;
	double area;
	cin >> side >> height;
	area = side * height / 2;
	cout << setprecision(2) << fixed << area << endl;
}