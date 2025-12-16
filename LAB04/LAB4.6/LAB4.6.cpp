#include<iostream>
using namespace std;

int main() {
	int sensor;

	cout << ">>>>> Line Following Robot System <<<<<" << endl;
	cout << "Select the position of the black line:" << endl;
	cout << "1. Left" << endl;
	cout << "2. Center" << endl;
	cout << "3. Right" << endl;
	cout << "Enter your choice (1-3): ";
	cin >> sensor;

	if (sensor == 1) {
		cout << "Robot turning left." << endl;
	}
	else if (sensor == 2) {
		cout << "Robot moving forward." << endl;
	}
	else if (sensor == 3) {
		cout << "Robot turning right." << endl;
	}
	else {
		cout << "Invalid choice. Please select a number between 1 and 3." << endl;
	}

	return 0;
}