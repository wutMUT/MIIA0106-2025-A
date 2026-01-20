#include<iostream>
#include<string>
using namespace std;
class Student 
{
	public:
		string id;
		string nickname;
		double height;
		double weight;

		void inputnakub() {
			cout << "Enter ID: ";
			cin >> id;
			cout << "Enter Nickname: ";
			cin >> nickname;
			cout << "Enter Height (in cm): ";
			cin >> height;
			cout << "Enter Weight (in kg): ";
			cin >> weight;
		}

	double calculateBMI() {
		double heightInMeters = height / 100.0;
		return weight / (heightInMeters * heightInMeters);
	}

	void printnakub() {
			cout << "ID: " << id << endl;
			cout << "Nickname: " << nickname << endl;
			cout << "Height: " << height << " cm" << endl;
			cout << "Weight: " << weight << " kg" << endl;
	}
};

int main() {
	Student s1;
	cout << "=== input Student ===" << endl;
	s1.inputnakub();
	cout << "\n=== Student Info ===" << endl;
	s1.printnakub();
	cout << "BMI: " << s1.calculateBMI() << endl;
	return 0;
}