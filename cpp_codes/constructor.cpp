#include <iostream>
#include <cmath> // For M_PI (constant for Pi value)
using namespace std;

class Shape {
    double area;

public:
    // Constructor for Rectangle
    Shape(double length, double breadth) {
        area = length * breadth;
        cout << "Area of Rectangle: " << area << endl;
    }

    // Constructor for Square
    Shape(double side) {
        area = side * side;
        cout << "Area of Square: " << area << endl;
    }

    // Constructor for Circle
    Shape(double radius, char circleFlag) {
        area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

int main() {
    double length, breadth, side, radius;

    // Rectangle
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    Shape rectangle(length, breadth);

    // Square
    cout << "Enter the side of the square: ";
    cin >> side;
    Shape square(side);

    // Circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Shape circle(radius, 'c'); // The second parameter is a dummy parameter to differentiate the constructor

    return 0;
}
