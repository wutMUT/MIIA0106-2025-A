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

int main() {
	Student s1;
	s1.inputnakub();
	s1.printnakub();
	return 0;
}