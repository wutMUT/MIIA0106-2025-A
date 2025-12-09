// > 230   ให้ หยุด 
#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 1; i <= 230; i++) 
	{
		sum += i;
		if (sum > 230) 
			break;
	
	
	}
	cout << "sum: " << sum << endl;
}
