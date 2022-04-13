#include "stdio.h"

/**
 * print_to_98 - prints all natural numbers from passed number to 98
 * @n: number to start with
 * Return: Returns 0
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d, ", n++);
	}
	putchar('\n');
}
