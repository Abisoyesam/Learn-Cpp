#include <iostream>
using namespace std;

int main(){
    // char is for storing single character or number
    // use single quote ' ' for char while double for stings " "

    char x = 'A';
    cout << (int)x; // Output: 65 because you are treating character as integer
    // from ASCII table A = 65

    char x = 65;
    cout << x; // Output: A, because you are treating integer as character
    // from ASCII table A = 65 and vice-versa

    char x = 65; // maximum char is 127
    cout << (int)x; // Output: 65, because of casting

    unsigned char x = 65; // maximum char is 255
    cout << (int)x; // Output: 65, because of casting

    return 0;
}