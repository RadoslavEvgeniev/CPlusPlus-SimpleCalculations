#include <iostream>
using namespace std;

int main() {
	double base1;
	double base2;
	double heigth;
	double area;
	cin >> base1 >> base2 >> heigth;
	area = (base1 + base2) * heigth / 2;
	cout << area << endl;
}