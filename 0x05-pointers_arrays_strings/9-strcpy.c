#include "main.h"
/**
 *_strcpy - copies a string point to by scr
 *@dest: pointer to destination array
 *@src: pointer to src array
 *Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
