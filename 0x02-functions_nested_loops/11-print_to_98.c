#include "stdio.h"

/**
 * print_to_98 - prints all natural numbers from passed number to 98
 * @n: number to start with
 * Return: Returns 0
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		while (n < 99)
		{
			printf("%d", n++);
			if (n != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	else
	{
		while (n > 97)
		{
			printf("%d", n--);
			if (n != 97)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
