#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 * *
 * Return: Returns 0 always
 */

void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}

		_putchar('\n');
	}
}
