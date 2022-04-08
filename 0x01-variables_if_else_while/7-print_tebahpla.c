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

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter = letter - 1;
	}
	putchar('\n');
	return (0);
}
