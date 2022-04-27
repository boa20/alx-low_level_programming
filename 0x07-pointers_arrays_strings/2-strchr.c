 #include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be considered
 * @c: character to be located
 * Return: returns a pointer or null
 */
char *_strchr(char *s, char c)
{
	int a = 0;
	int b = 0;

	while (a != '\0') 
		a++;
	for (b = 0; b < a; b++)
	{
		if (s[b] == c)
		{
			return (s);
			break;
		}
	}
	return (NULL);
}
