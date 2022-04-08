#include <stdio.h>
/**
 * main - Starting point
 * *
 * Return: Returns 0
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);	
}
