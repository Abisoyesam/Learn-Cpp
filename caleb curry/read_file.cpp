#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main (){
    ifstream file ("hello.txt"); // read the file
    vector<string> names;

    string input; // store the file inside input 
     
     while(file >> input){
        names.push_back(input); // store it in a vector
     }

     for ( string name : names)
     {
        cout << name << endl;
     }
     

    return 0;
}