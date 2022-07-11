#include <iostream>

using namespace std;

int main(){
    string names[] = {"Akinloye", "Samson", "Abisoye"};

    int size = sizeof(names) / sizeof(string);

    for (int i = 0; i < size; i++)
    {
        cout << names[i] << endl;
    }
    cout << '\n' << "********Range based for loop*********" << endl;
    // Range based For Loop
    for (string name : names)
    {
        cout << name << endl;
    }
    
    

    return 0;
}