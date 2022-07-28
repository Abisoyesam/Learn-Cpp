#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	vector<int> nums;
	
	// you can preset the elements of vector
	// vector<int> nums(5);
	
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	
	cout << nums[1] << endl;
	
	// iterate through vector
	for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
		cout << *it << endl;
		}
	
	return 0;
}

/*
	Vector is used over array because it helps to allocate memory.
	
	If you pre-set the element of a vector, don't use the push_back() method.
	
	To iterate over vector, you can use normal for loop.
	
	'vector<int>::iterator it = nums.begin()' will only output the first element.
*/