#include "main.h"
/**
 * cap_string - Capitalizes a string
 * @n: string to capitalize
 * Return: Converted string
 */
char *cap_string(char *n)
{
	int a;

	a = 0;
	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (a = 0; n[a] != '\0'; a++)
	{
		switch (n[a])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[a + 1] > 96 && n[a + 1] < 123)
				{
					n[a + 1] = n[a + 1] - 32;
				}
		}
	}
	return (n);
}
