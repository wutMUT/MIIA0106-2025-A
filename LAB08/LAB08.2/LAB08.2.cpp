#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; 

    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";

        cout << "Enter ID: ";
        cin >> students[i].id;

        cout << "Enter Nickname: ";
        cin >> students[i].nickname;

        cout << "Enter Line ID: ";
        cin >> students[i].lineId;

        cout << "Enter Phone: ";
        cin >> students[i].phone;

        cout << endl;
    }

    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Student #" << (i + 1) << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Nickname: " << students[i].nickname << endl;
        cout << "Line ID: " << students[i].lineId << endl;
        cout << "Phone: " << students[i].phone << endl;

        cout << "----------------------\n";
    }

    return 0;
}