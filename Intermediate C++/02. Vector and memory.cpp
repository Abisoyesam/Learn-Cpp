#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	vector<double> numbers(20, 1);
	
	int capacity = numbers.capacity();
	
	cout << "Size: "<< numbers.size()<<endl;
	cout << "Capacity: "<< capacity << endl;
	
	 for (vector) 
	
	return 0;
}

/*
	You can initialize a vector even when pre-set by adding second argument as in line 8.
	
	C++ has a built in method called 'capacity()'
*/