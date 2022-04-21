#include "main.h"
/**
 * swap_int - swaps the values of to integers
 * @a: one of the pointers used to swap the values of two integers
 * @b: one of the pointers used to swap the values of two integers
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
