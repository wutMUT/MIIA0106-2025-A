#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact; 
};

struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;
    Parent myParent;  
};

int main() {
    Student s1;

    cout << "=== Input Student Info ===\n";
    cout << "Student ID: ";
    cin >> s1.id;
    cout << "Nickname: ";
    cin >> s1.nickname;
    cout << "Line ID: ";
    cin >> s1.lineId;

    cout << "\n=== Input Student Contact (Level 2 Nesting) ===\n";
    cout << "Student Mobile: ";
    cin >> s1.myContact.mobile;
    cout << "Student Home: ";
    cin >> s1.myContact.home;

    cout << "\n=== Input Parent Info (Level 2 Nesting) ===\n";
    cout << "Parent Name: ";
    cin >> s1.myParent.name;
    cout << "Relationship: ";
    cin >> s1.myParent.relationship;

    cout << "\n=== Input Parent Contact (Level 3 Nesting) ===\n";
    cout << "Parent Mobile: ";
    cin >> s1.myParent.contact.mobile;
    cout << "Parent Home: ";
    cin >> s1.myParent.contact.home;

    cout << "\n====================================\n";
    cout << "DATA SUMMARY\n";
    cout << "====================================\n";
    cout << "Student: " << s1.nickname << " (" << s1.id << ")\n";
    cout << "Line: " << s1.lineId << "\n";
    cout << "Student Tel: " << s1.myContact.mobile << "\n";

    cout << "------------------------------------\n";
    cout << "Parent: " << s1.myParent.name << " (" << s1.myParent.relationship << ")\n";

    cout << "Parent Tel: " << s1.myParent.contact.mobile << "\n";
    cout << "====================================\n";

    return 0;
}