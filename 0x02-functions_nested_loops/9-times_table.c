#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 * *
 * Return: Returns 0
 */
void times_table(void)
{
	int a;
	int b;
	int product;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			product = a * b;
			_putchar(product + '0');

			while (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
