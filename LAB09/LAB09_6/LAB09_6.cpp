#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	string id;
	string nickname;
};
int main() {
	Student s1;
	Student *p = nullptr;
	
	p = &s1;

	p->id = "6811130023";
	p->nickname = "Wut";

	cout << "ID: " << p->id << endl;
	cout << "Nickname: " << p->nickname << endl;

	return 0;
}
