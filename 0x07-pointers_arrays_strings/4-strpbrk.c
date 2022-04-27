 #include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be considered
 * @accept: number of bytes to be returned
 * Return: returns a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;
	char *p;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
			b++;
		}
		a++;
	}
	return (0);
}
