#include <iostream>

using namespace std;

int main() {
    int factorial;
    cout << "********************* Factorial Calculator *************************" << endl;
    cout << "Enter a number: ";
    cin >> factorial;
    int user_input = factorial;

    for (int i = factorial - 1; i > 1; i--)
    {
        factorial *= i;
    }
    cout << "The factorial of " <<user_input<< " is: " << factorial;

    return 0;
}