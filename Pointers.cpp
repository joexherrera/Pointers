#include <iostream>

using namespace std;

int main()
{
	//Pointers - store the address of a variable
	// (*) ==> derefence operator
	// *p1 ==> returns the value of the variable the pointer is pointing to
	// p1 ==> returns address of where variable is stored
	// &p1 ==> returns address of pointer
	
	int num1 = 8,
		*p1 = &num1;

	cout << "Value: " << *p1 << endl; // ==> 8 (returns the value of the variable in the address)
	cout << "Address of Variable: " << &num1 << endl; // ==> 0025F8EC (returns address of variable)
	cout << "Address of Variable: " << p1 << endl; // ==> 0025F8EC (p1 without * returns address of variable)
	cout << "Address of : p1" << &p1 << endl; // ==> 0037F84C (returns address of pointer)


	system("pause");
}