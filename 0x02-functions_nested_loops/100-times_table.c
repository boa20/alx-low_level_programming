#include "main.h"
/**
 * print_times_table - prints n times table starting with 0
 * @n: integer to be referenced
 * Return: Returns 0
 */
void print_times_table(int n)
{
	int a;
	int b;
	int product;
	
	if ((n < 15) && (n > 0))
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				product = a * b;
				if (b == 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
				}

				else if (product <= 9)
				{
					_putchar(' ');
					_putchar((product % 10) + '0');
					if (b < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}

				else if (product <= 100)
				{
					_putchar((product / 100) + '0');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
					if (b < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}

				else
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
					if (b < n)
					{
						_putchar(',');
						_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
