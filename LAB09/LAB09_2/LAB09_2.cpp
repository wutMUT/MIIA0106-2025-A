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
	
void showinformationnakub() {
		cout << "----Student Information----" << endl;
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
		cout << "Line ID: " << lineID << endl;
		cout << "Phone Number: " << phone << endl;
	}
};

int main() {
	const int size = 5;
	Student students[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter information for student " << (i + 1) << endl;
		students[i].inputnakub();
		cout << endl;
	}

	cout << "all student information list" << endl;
	for (int i = 0; i < size; i++) {
		students[i].showinformationnakub();
		cout << endl;
	}
	return 0;
}