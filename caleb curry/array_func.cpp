#include <iostream>
using namespace std;

void print_arrays(int array[], int size){
     for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
}

int main() {
    int odd_nums[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int size = sizeof(odd_nums) / sizeof(int);

    print_arrays(odd_nums, size);

    return 0;
}