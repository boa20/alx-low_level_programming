#include <stdio.h>
#include "main.h"
/**
 *puts2 - prints every other character of a string
 *@str: pointer to string to be considered.
 *Return: nothing
 */
void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		a++;
	}
	b = a - 1;
	for (z = 0 ; z <= b ; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
