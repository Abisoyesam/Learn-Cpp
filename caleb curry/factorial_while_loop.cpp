#include <iostream>

using namespace std;

int main() {
    int factorial;
    cin >> factorial;

    int user_input = factorial;

    int i = factorial - 1;

    while (i > 1)
    {
        factorial *= i;
        i--;
    }

    cout << "The factorial of " << user_input << " is: " << factorial;

    return 0;
}