 #include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of byte
 * return: returns a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}
	return (s);
}
