#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main (){
    ofstream file ("hello.txt", ios::app);

    vector<string> names = {
        "Akinloye", "Gbenga", "Taoheed", "Iyanu", "Samuel"};

    for (string name : names)
    {
        file << name << '\n';
    }
    

    file.close(); // optional 

    // Alternatively
    // ofstream file;
    //file.open("hello.txt");

    return 0;
}