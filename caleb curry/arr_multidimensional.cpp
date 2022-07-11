#include <iostream>
#include <vector>

using namespace std;

int main(){
    int grades[] = {1, 2, 3, 4}; // one dimensional

    int student_grades[][3] = {{1, 2, 3}, 
                               {4, 5, 6}, 
                               {7, 8, 9}}; // Multi dimensional (3)
    // insert the size of the array in the second bracket - compulsory

    // multi-dimensional vectors
    vector<vector<int>> grades = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // for 2D array, use two nested for loops
    for (int r = 0; r < 3; r++) // r reps rows
    {
        for (int c = 0; c < 3; c++) // c reps columns
        {
            cout << student_grades[r][c] << '\t';
        }
        cout << '\n';
    }
    
    return 0;
}