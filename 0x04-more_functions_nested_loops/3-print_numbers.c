#include "main.h"
/**
 * print_numbers - print numbersfrom 0 to 9
 * 
 * Return: Returns 0
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x < '10'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
