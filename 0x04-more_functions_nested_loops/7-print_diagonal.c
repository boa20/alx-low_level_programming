#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 *@n: number of times '\' is to be printed
 **
 */
void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
