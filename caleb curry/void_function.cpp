#include <iostream>
using namespace std;

int raiseToPower(int base, int exponent){
    int result = 1;
    for (int i = 0; i < exponent; i++){
        result *= base;
    }
    return result;
}

void power (int base, int exponent) // void function doesn't return an output
{ 
    int result = raiseToPower(base, exponent);

    cout << base << " raised to power " << exponent << " is " << result << endl;
}

int main(){
    int base, exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter an exponent: ";
    cin >> exponent;

    power(base, exponent);

    return 0;
}