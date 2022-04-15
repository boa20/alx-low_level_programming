#include "main.h"
/**
 * print_numbers - print numbersfrom 0 to 9
 **
 * return: returns 0
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
