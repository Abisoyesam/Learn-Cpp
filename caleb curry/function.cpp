#include <iostream>
// #include <cmath>  for inbult math functions

using namespace std;

int raiseToPower(int base, int exponent){ // declaration
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}


int main (){
    cout << "x raise to power y calculator" << endl;
    int base, exponent;

    cout << "What is the base: ";
    cin >> base;

    cout << "What is the exponent: ";
    cin >> exponent;

    int result = raiseToPower(base, exponent);
    cout << base << " raise to power " << exponent << " is " << result << endl;
    
    return 0;
}

