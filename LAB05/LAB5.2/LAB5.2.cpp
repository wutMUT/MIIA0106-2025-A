#include <iostream>
using namespace std;

// Function Prototype
int maxOfThree(int a, int b, int c);

int main()
{
    int a, b, c;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;

    int maxValue = maxOfThree(a, b, c);

    cout << "Maximum is: " << maxValue << endl;

    return 0;
}

// Function Definition
int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
		return c;
}
