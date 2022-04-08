#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program start point
 * *
 * Return: Always return 0
 */
int main(void)
{
	char letter;
	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		putchar('\n');
		letter = letter + 1;
	}
	return (0);
}
