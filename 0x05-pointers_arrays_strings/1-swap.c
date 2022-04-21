#include "main.h"
/**
 * reset_to_98 - updates the value of its parameter to 98
 * @a: represents the one of the pointers used to swap the values of two integers
 * @b: represents the one of the pointers used to swap the values of two integers
 * Return: nothing
 */
void reset_to_98(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
