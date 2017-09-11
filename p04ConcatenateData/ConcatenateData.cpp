#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string firstName;
	string lastName;
	int age;
	string town;

	cin >> firstName >> lastName >> age >> town;
	stringstream ss;
	ss << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << town << ".";
	cout << ss.str() << endl;
}