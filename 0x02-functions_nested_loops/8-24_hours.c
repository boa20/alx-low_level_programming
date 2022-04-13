#include "main.h"

/**
 * jack_bauer - prints every minute of day
 * *
 * Return: Returns 0
 */
void jack_bauer(void)
{
	int a;
	int b;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}

	else
	{
		last_digit = (n % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
