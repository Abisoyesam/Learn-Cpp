#include <iostream>
#include <float.h>

using namespace std;

int main(){
    /*
    Out of the floating data types, float are less precised and trusted.
    */
    float a = 10.0 / 3;
    a *= 1000000000;

    double b;
    // double b = 55000; // 5.5 * 10000 or 5.5E4
    long double c;

    cout << fixed << a << endl;

    // To know how many of the digits can be trusted, include float.h... then
    cout << FLT_DIG << endl; // 6 digits for float
    cout << DBL_DIG << endl; // 15 digits for double
    cout << LDBL_DIG << endl; // 18 digits for float
}