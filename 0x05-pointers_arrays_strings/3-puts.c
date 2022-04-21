#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to a string
 * Return: nothing
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
