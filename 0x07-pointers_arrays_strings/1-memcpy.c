 #include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination for copy
 * @src: source to copy from
 * @n: number of byte to copy
 * return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	while (n > 0)
	{
		dest[a] = src[j];
		a++;
		b++;
		n--;
	}
	return (dest);
}
