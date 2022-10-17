#include <iostream>

using namespace std;

int main () {
    double radius, length;
    cout << "Enter the radius of cylinder: ";
    cin >> radius;
    cout << "Enter the length of cylinder: ";
    cin >> length;
    const double pi = 3.14;
    double area = radius * radius * pi;
    double volume = area * length;
    cout << "Area of the cylinder: "  << area << endl;
    cout << "Volume of the cylinder: " << volume << endl;

    return 0;
}
