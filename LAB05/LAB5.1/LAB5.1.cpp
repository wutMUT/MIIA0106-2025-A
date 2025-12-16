#include <iostream>
#include <cmath>
using namespace std;

// Function Prototype
double circleArea(double radius);
double rectArea(double width, double height);

int main()
{
    double radius;
    double width;
    double height;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "Enter height of rectangle: ";
    cin >> height;

    cout << endl;
    cout << "Circle Area = " << circleArea(radius) << endl;
    cout << "Rectangle Area = " << rectArea(width, height) << endl;

    return 0;
}

// Function Definition
double circleArea(double radius)
{
    const double PI = 3.14159;
    return PI * radius * radius;
}

double rectArea(double width, double height)
{
    return width * height;
}
