#include<iostream>
#include<string>
using namespace std;

int main() {
	string Student_name;
	string IDname;
	float score;
	string grade;

	cout << "Enter name: ";
	getline(cin, Student_name);

	cout << "Enter ID: ";
	cin >> IDname;

	cout << "Enter score: ";
	cin >> score;

	if (score >= 90 && score <= 100) {
		grade = "A";
	}
	else if (score >= 80 && score <= 89){
		grade = "B";
	}
	else if (score >= 70 && score <= 79){
		grade = "C";
	}
	else if (score >= 60 && score <= 69){
		grade = "D";
	}
	else if (score >= 0 && score <= 59) {
		grade = "F";
	}
	else {
		grade = "error";
	}

	cout << "********************Student Report********************" << endl;
	
	cout << "Name	: " << Student_name << endl;
	cout << "ID	: " << IDname << endl;
	cout << "Score	: " << score << endl;
	cout << "Grade	: " << grade << endl;

	cout << "*******************************************************" << endl;
}