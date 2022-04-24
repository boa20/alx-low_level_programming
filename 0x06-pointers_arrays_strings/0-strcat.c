#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * return: Returns a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
