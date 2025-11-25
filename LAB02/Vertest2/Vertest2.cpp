#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	int age;
	float height;

	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Enter your age: ";
	cin >> age;

	cout << "Enter your height (in cm): ";
	cin >> height;

	cout << endl;

	cout << "=================Student Info=================" << endl;
	cout << "Name		: " << name << endl;
	cout << "Age		: " << age << endl;
	cout << "Height		: " << height << " cm" << endl;
	cout << "==============================================" << endl;

	return 0;
}