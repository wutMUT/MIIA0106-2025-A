#include <iostream>
#include <cmath>
using namespace std;

// Function Prototype
void processNumber(int number, int& count, int& minValue);

int main()
{
    int number;
    int count = 0;
    int minValue = 0;

    do
    {
        cout << "Enter number: ";
        cin >> number;

        if (number != 0)
        {
            processNumber(number, count, minValue);
        }

    } while (number != 0);

    cout << endl;
    cout << "Total numbers entered: " << count << endl;
    cout << "Minimum value: " << minValue << endl;

    return 0;
}

// Function Definition
void processNumber(int number, int& count, int& minValue)
{
    count++;

    if (count == 1 || number < minValue)
    {
        minValue = number;
    }
}
