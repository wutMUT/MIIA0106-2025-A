#include<iostream>
#include<string>
using namespace std;
class Student 
{
	public:
		string id;
		string nickname;
		string lineID;
		string phone;

	void inputnakub() {
			cout << "Enter ID: ";
			cin >> id;
			cout << "Enter Nickname: ";
			cin >> nickname;
			cout << "Enter Line ID: ";
			cin >> lineID;
			cout << "Enter Phone Number: ";
			cin >> phone;
	}

	void printnakub() {
			cout << "----Student Information----" << endl;
			cout << "ID: " << id << endl;
			cout << "Nickname: " << nickname << endl;
			cout << "Line ID: " << lineID << endl;
			cout << "Phone Number: " << phone << endl;
	}
};

void swapStudents(Student &a, Student &b) {
	Student temp = a;
	a = b;
	b = temp;
}

void sortbyID(Student students[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (students[j].id > students[j + 1].id) {
				swapStudents(students[j], students[j + 1]);
			}
		}
	}
}

void printStudent(Student students[], int size) {
	for (int i = 0; i < size; i++) {
		students[i].printnakub();
		cout << "---------------------" << endl;
	}
}

int main() {
	const int size = 5;
	Student students[size];
	for (int i = 0; i < size; i++) {
		cout << "Enter information for student " << (i + 1) << endl;
		students[i].inputnakub();
		cout << endl;
	}
	sortbyID(students, size);
	cout << "Student List" << endl;
	printStudent(students, size);
	return 0;
}