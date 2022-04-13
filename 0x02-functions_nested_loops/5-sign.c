#include "main.h"
/**
 * print_sign - checks for sign of number
 * @n: contains value to be compared
 * Return: Returns 1 if positive and 0 if 0 and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
