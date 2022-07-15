/*
	Literals are fixed value that are directly used in a program.
	
	The most commonly used literal in C++ are: integer, floating point, character.
	
	Char is enclosed in a single quotation. e.g 'a', '+', '1'
	
	Variables are used to store value so that they can later be used in the program.
	
	To declare variable, you need data type & variable name (identifier) end with semi colon. As in line 22.
	
	You can declare multiple variables as in line 24.
	
	 Use 'const' if you don't wanna override variable. 
*/


#include <iostream>

using namespace std;

int age;

int tax, salary = 4500;

int main(){
	age = 22;
	
	cout << age <<endl;
	
	return 0;
}