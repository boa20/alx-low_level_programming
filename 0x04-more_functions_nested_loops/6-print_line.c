#include "main.h"
/**
 * print_line - print numbers from 0 to 9 except 2 and 4
 *@n: number of times '_' is to be printed
 **
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
