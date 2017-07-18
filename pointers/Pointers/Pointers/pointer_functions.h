#ifndef _POINTER_FUNCTIONS_
#define _POINTER_FUNCTIONS_

// Return the length of a string using pointer arithmetic
int len_of_string(char * str)
{
	int len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return len;
}

// Swap two integer values using call-by reference
void swap_integers(int & a, int & b)
{
	int c = a;
	a = b;
	b = c;
}

// swap two integer values using pointers
void swap_integers_pointer_values(int * a, int * b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

// swap two pointers to point at each others values
void swap_integer_pointer(int ** a, int ** b)
{
	int * c = *a;
	*a = *b;
	*b = c;
}

#endif
