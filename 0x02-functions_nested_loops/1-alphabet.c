#include "main.h"
/**
 * main - checks function created
 * *
 * Return: Always return 0
 */

void print_alphabet(void)
{
	char a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
