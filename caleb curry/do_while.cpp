#include <iostream>

using namespace std;

int main() {
    string password = "@12345qwert!!!";
    string guess;

    do
    {
        cout << "Guess the password: ";
        cin >> guess;
    } while (guess != password);

    cout << "Password Matched!!!";

    return 0;
}