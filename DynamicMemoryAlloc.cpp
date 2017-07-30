#include <iostream> // creating variables in the heap

// HEAP: an area of preserved computer main storage memory that a program
// process can use to store data in some variable amount that won't be known
//until the program is running.

using namespace std;

//void function
void print1(int *pointer)
// print - prints the value a pointer is pointing to
// int* - pointer that is pointing to an integer
{
	cout << "Pointer 1: " << *pointer << endl;
}

//return function
int* print2(int *pointer)
{
	return pointer;
}

int main()
{
	int *p1;
	p1 = new int; //point to an unknown integer...will point to an address

	cout << "Pointer 1 currently outputs:  " << *p1 << endl; // ==> -842150451

	*p1 = 45; 

	cout << "Pointer 1: " << *p1 << endl; // ==> 45

	print1(p1); // ==> 45
	print2(p1); //==> 45

	system("pause");
}