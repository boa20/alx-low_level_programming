#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9 except 2 and 4
 **
 **
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' || x != '4')
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
