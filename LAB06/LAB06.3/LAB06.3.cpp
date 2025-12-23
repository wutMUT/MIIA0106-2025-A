#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void DisplayStudentInfo(string name, string id, double score, char grade)
{
	cout << "Student Name: " << name << "\n";
	cout << "Student ID: " << id << "\n";
	cout << "Score: " << fixed << setprecision(2) << score << "\n";
	cout << "Grade: " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';
}

int main()
{
	const int N = 3; //student
	const int M = 4; //subject

	string name[N], id[N];
	double score[N][M];
	double total[N];
	char grade[N];

	for (int i = 0; i < N; i++)
	{
		cout << "Enter Student " << (i + 1) << " Name: ";
		getline(cin >> ws, name[i]);

		cout << "Enter Student " << (i + 1) << " ID: ";
		cin >> id[i];

		total[i] = 0;
		for(int j = 0; j < M; j++)
		{
			cout << "Enter Student " << (i + 1) << " Score " << (j + 1) << ": ";
			cin >> score[i][j];
			total[i] += score[i][j];
		}
	}

	for(int i = 0; i < N; i++)
	{
		calculateGrade(total[i], grade[i]);
		cout << "\n";
		DisplayStudentInfo(name[i], id[i], total[i], grade[i]);
	}
	return 0;
}