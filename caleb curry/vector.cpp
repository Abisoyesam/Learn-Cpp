#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> data){
    for(int i = 0; i < data.size(); i++){
        cout << data[i] << '\t';
    }
}

int main(){
    vector<int> data = {1, 2, 3, 4, 5};
    print_vector(data);

    return 0;
}