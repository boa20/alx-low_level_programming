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
			if (b == 0)
			{
				_putchar('0');
			}

			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((product % 10) + '0');
				if (b < 9)
				{
					_putchar(',');
				}
			}

			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
