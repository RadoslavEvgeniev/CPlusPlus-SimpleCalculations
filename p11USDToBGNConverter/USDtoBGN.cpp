#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double usd;
	cin >> usd;
	double bgn = usd * 1.79549;
	cout << setprecision(2) << fixed << bgn << " BGN" << endl;
}