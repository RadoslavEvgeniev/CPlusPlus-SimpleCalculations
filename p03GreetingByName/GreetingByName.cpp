#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	string inputName;
	cin >> inputName;
	stringstream result;
	result << "Hello, " << inputName << "!";
	cout << result.str() << endl;
}