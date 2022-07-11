#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

string getFileName( string name){
    cout << "******* TEXT FILE GENERATOR **********" << endl;
    
    cout << "Enter the filename: ";
    getline(cin, name);

    name = name.append(".txt");

    cout << name << " has been succesfully created..." << endl;

    return name;
}

vector<string> inputs;
string writeFileContents();

string createFile(string name){
    name = getFileName(name);

    ofstream file (name, ios::app);

    writeFileContents();

    for ( string input : inputs) {
        if (input != ""){
         file << input << "\n";
        }
    }
    cout << "Inputs have been successfully written to the file..." << endl;
    return name;
}

string writeFileContents(){
    string text;

    inputs = {};

    do {
        cout << "Write the file contents" << "\n";

        getline(cin, text);
        inputs.push_back(text);

    } while (text != "");

    return text;
}

int main (){
    
    string filename;

    createFile(filename);

    return 0;
}