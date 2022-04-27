 #include <stdio.h>
/**
 * print_diagsums- adds numbers in a diagonal
 * @a: array containing characters
 * @size: size of array levels
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int b;
	int c = 0;
	int d = 0;
	int e = size * size;

	for (b = 0; b < e; b++)
	{
		c += a[b];
	}
	for (b = size - 1; b < s - 1; b += size -1)
	{
		d += a[b];
	}
	printf("%d, %d\n", c, d);
}
