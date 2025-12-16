#include <iostream>
#include <string>
using namespace std;

double calculateCircleArea(double x)
{
    double PI = 3.14159;
    double area = PI * x * x;
    return area;
}

int main()
{

    //??????????????
    const double PI = 3.14159;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = calculateCircleArea(radius);
    cout << "The area of the circle with radius " << radius << " is " << area << endl;

    return 1;
}