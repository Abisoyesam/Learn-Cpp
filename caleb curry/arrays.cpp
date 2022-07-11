#include <iostream>

using namespace std;

int main(){
    // ARRAYS are statically sized while VECTORS are dynamically sized

    int nums[20] = {0, 2, 4, 6, 8}; // Array
    cout << nums[3] << endl;

    int nums_arr[] = {1, 3, 45, 6, 34}; // array without specified size

    int size = sizeof(nums_arr) / sizeof(int); // to get size of array
    // N.B: It is diffent from Javascript whereby you use array.length()
    // size of int is 4 && there are 5 numbers in the array... 4 * 5  = 20 
    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << nums_arr[i] << endl;
    }
    
    return 0;
}