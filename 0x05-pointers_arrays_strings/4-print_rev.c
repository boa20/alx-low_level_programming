#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 * Return: nothing
 */
void print_rev(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	l -= 1;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
