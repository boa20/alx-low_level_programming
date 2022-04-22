#include <stdio.h>
#include "main.h"
/**
 *puts_half - prints half of a string
 *@str: pointer to string to be considered
 *Return: nothing
 */
void puts_half(char *str)
{
	int a = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		a++;
	}
	if (a % 2 == 0)
	{
		n = a / 2;
	}
	else
	{
		n = (a + 1) / 2;
	}
	for ( ; n < a ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
