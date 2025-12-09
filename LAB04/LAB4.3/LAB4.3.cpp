#include<iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 1; i <= 500; i++)
	{
		sum += i;
		if (sum > 230)
			break;
	}
	cout << "sum : " << sum << endl;
}
