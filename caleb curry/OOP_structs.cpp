#include <iostream>

using namespace std;

struct Students {
    string first_name;
    string last_name;

    string get_status(){
        return status;
    }

    private:
        string status = "Single";
};

int main(){
    Students me;
    me.first_name = "Akinloye";
    me.last_name = "Abisoye";

    cout << "My name is " << me.first_name << ". I am " << me.get_status() << endl;

    return 0;
}