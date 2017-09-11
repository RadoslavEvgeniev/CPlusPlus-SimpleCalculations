#include <iostream>

using namespace std;

int main() {
	double rad;
	cin >> rad;
	double deg = rad * 180 / 3.141592653589793238463;
	cout << (int)deg << endl;
}