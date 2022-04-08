#include <stdio.h>
#include <stdlib.h>
/**
 * main - Starting point
 * *
 * Return: Returns 0
 */
int main(void)
{
	char upper, lower;

	lower = 'a';
	upper = 'A';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
