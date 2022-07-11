#include <iostream>

using namespace std;

int main(){
    int age;
    cout << "How old are you: ";
    cin >> age;

    switch (age)
    {
    case 13:
        cout << "You are not a teenager.";
        break;

    case 18:
        cout << "You are a teenager";
        break;

    default:
        cout << "You are " << age << " years old." << endl;
        break;
    }

    return 0;
}