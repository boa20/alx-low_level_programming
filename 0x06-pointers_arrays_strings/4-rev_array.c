#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: array to be reversed
 * @n: number of elements of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int b;
	int temp;

	for (b = 0; b < n--; b++)
	{
		temp = a[b];
		a[b] = a[n];
		a[n] = temp;
	}
}
