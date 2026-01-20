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

	void printStudent(Student s) {
		cout << "----Student Information----" << endl;
		cout << "ID: " << s.id << endl;
		cout << "Nickname: " << s.nickname << endl;
		cout << "Line ID: " << s.lineID << endl;
		cout << "Phone Number: " << s.phone << endl;
	}
};
	int main() {
		Student s1;
		s1.inputnakub();
		s1.printStudent(s1);
		return 0;
	}