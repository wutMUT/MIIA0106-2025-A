#include <iostream>
using namespace std;

// Function Prototypes
void swapValue(int a, int b);
void swapReference(int& a, int& b);

int main()
{
    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;

    // Call by Value
    swapValue(a, b);
    cout << "After swap (Call by Value): a = " << a << ", b = " << b << endl;

    // Call by Reference
    swapReference(a, b);
    cout << "After swap (Call by Reference): a = " << a << ", b = " << b << endl;

    return 0;
}

// Call by Value
void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference
void swapReference(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
