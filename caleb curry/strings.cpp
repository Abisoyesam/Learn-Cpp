#include <iostream>

using namespace std;

int main(){
    string name = "Abisoye";
    name.append(" Akinloye"); // Abisoye Akinloye

    // INSERT
    name.insert(0, "Bro "); // Bro Abisoye Akinloye

    // FIND
    int i = name.find("loye");
    cout << i << endl; // index of 16

    // ERASE
    name.erase(16, 4);
    cout << name << endl; // Bro Abisoye Akin

    // Append Alternative
    name += 's';
    cout << name << endl; // Bro Abisoye Akins

    // POP_BACK
    name.pop_back();
    cout << name << endl; // Bro Abisoye Akin

    // REPLACE
    name.replace(0, 3, "Mr.");
    cout << name << endl; // Mr. Abisoye Akin
}