#include <iostream>

using namespace std;

struct Rectangle {
    double length;
    double width;
};

double area(double length, double width){
    return length * width;
}

double area(double length){
    return length * length;
}

double area(Rectangle rectangle){
    return rectangle.length * rectangle.width;
}

int main (){
    Rectangle rectangle;
    rectangle.length = 14;
    rectangle.width = 8;

    cout << area(rectangle.length, rectangle.width) << endl;
    cout << area(rectangle.length) << endl;
    cout << area(rectangle) << endl;

    return 0;
}