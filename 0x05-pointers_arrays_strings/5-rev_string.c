#include <stdio.h>
#include "main.h"
/**
 *rev_string - reverses a string.
 *@s: pointer to string to be reversed.
 *Return: nothing
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		a++;
	}
	b = a - 1;
	for ( ; e < ((b / 2) + 1) ; e++)
	{
		x = (b - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
