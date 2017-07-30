#include <iostream>

using namespace std;

int main()
{
	int num1 = 15,
		num2 = 45;

	int *p1 = &num1,
		*p2 = &num2;

	cout << "Pointer 1: " << *p1 << endl; // ==> 15
	cout << "Pointer 2: " << *p2 << endl; // ==> 45

	*p1 = *p2; //changing value of num1 pointer (*p1) also changes value of variable the pointer is pointing to

	cout << "Pointer 1: " << *p1 << endl; // ==> 45 (*p1 pointer still points to num1 but variable num1 value has changed)
	cout << "Pointer 2: " << *p2 << endl; // ==> 45

	cout << "num1 = " << num1 << endl; // ==> 45 (num1 value has changed)
	cout << "num2 = " << num2 << endl;

	/*
	if we were to say p1 = p2...

	Address of p1 is = to address of p2 and p2 is pointing to the address which holds the value of 45.
	So now pointer *p1 will give the same value as pointer *p2 (45) but will not change the value of 
	the varibale that *p2 was pointing to (unlike *p1 = p*2)

	num1 will stil be 15
	num2 will still be 45
	*/

	system("pause");
}