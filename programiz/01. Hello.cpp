#include <iostream>

using namespace std;

int main(){
	cout << "Hello, World!" << endl;
	
	return 0;
}

/*
	#include: To import external file into our program.
	
	<iostream>: i/o means input and output. However, it is an built in external file to input and output value in the console.
	
	cout: mean console out. To output value. Instead of writing it as std::cout, that is why 'using namespace std' is declared.
	
	main(): a valid c++ program must include a 'main()' function which is the entry point of the program.
	
	Function is expected to return a value, hence since the data type of the main() function is 'int' integer, that is why it returns 0.
*/