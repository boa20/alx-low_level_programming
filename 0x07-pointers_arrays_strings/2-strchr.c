 #include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be considered
 * @c: character to be located
 * Return: returns a pointer or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
			s++;
		}
	}
	return (s + 1);
}
