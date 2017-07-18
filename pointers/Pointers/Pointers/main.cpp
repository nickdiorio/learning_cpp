#include <iostream>
#include <cstdlib>
#include "pointer_functions.h"

int main()
{
	int errorStatus = 0;

	// Problem 7.1
	char * str = "Nick";
	std::cout << str << ": length: " << len_of_string(str) << std::endl << std::endl;

	// Problem 7.2
	int a = 10, b = 5;
	std::cout << "Swap: " << a << " for: " << b << std::endl;
	swap_integers(a, b);
	std::cout << "Result: " << a << " for: " << b << std::endl << std::endl;

	// Problem 7.3
	int * c = &a;
	int * d = &b;

	std::cout << "Swap with pointers: " << *c << " for: " << *d << std::endl;
	swap_integers_pointer_values(c, d);
	std::cout << "Result: " << *c << " for: " << *d << std::endl << std::endl;

	// Problem 7.4
	int x = 5, y = 6;
	int *ptr1 = &x, *ptr2 = &y;
	std::cout << "Swap pointers: " << *ptr1 << " for: " << *ptr2 << std::endl;
	swap_integer_pointer(&ptr1, &ptr2);
	std::cout << "Result: " << *ptr1 << " for: " << *ptr2 << std::endl << std::endl;

	// Problem 7.5
	char * oddOrEven = "Never odd or even";

	// 7.5.1 pointer to 6th char of oddOrEven
	std::cout << "Problem 7.5.1 \n";
	char * nthCharPtr = &(oddOrEven[5]);

	// 7.5.2 updated nthCharPtr to point to 4th char of oddOrEven
	std::cout << "Problem 7.5.2 \n";
	nthCharPtr -= 2;

	// 7.5.3 print value pointed to by nthCharPtr
	std::cout << "Problem 7.5.3 \n";
	std::cout << *nthCharPtr << std::endl << std::endl;

	// 7.5.4 new pointer to a pointer pointing to nthCharPtr
	std::cout << "Problem 7.5.4 \n";
	char ** pointerPtr = &nthCharPtr;

	// 7.5.5 print value stored in pointerPtr
	std::cout << "Problem 7.5.5 \n";
	std::cout << pointerPtr << std::endl << std::endl;

	// 7.5.6 print value pointed to by nthCharPtr using pointerPtr
	std::cout << "Problem 7.5.6 \n";
	std::cout << **pointerPtr << std::endl << std::endl;

	// 7.5.7 Update nthCharptr to point to next char in OddOrEven
	std::cout << "Problem 7.5.7 \n";
	nthCharPtr += 1;

	// 7.5.8 Print how far away from *nthCharPtr is from start of string
	std::cout << "Problem 7.5.8 \n";
	std::cout << "Distance from start: " << nthCharPtr - oddOrEven << std::endl << std::endl;

	system("pause");
	return errorStatus;
}