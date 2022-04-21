#include "main.h"
/**
 * _strlen - updates the value of its parameter to 98
 * @s: represents the pointer to a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
