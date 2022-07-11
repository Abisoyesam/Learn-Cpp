#include <iostream>

using namespace std;

class Student {
    string age = "22";

    public:
        string first_name;
        string last_name;
        string department;
        string get_age(){
            return age;
        }
}; // dont forget to always add semi-colon here

int main() {
    Student me;

    me.first_name = "Akinloye";
    me.last_name = "Abisoye";

    cout << "I am " << me.get_age() << " years old.\n";

    return 0;
}