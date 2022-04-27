 #include "main.h"
/**
 * _strpn- gets the length of a prefix substring
 * @s: string to be considered
 * @accept: number of bytes to be returned
 * Return: returns number of bytes in the iniitial segment of s
 * which consists of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int len;

	len = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b =0; accept[b] != '\0' && accept[b] != s[a]; b++)
			;
		if (s[a] == accept[b])
			length++;
		if (accept[b] == '\0')
			return (len);
	}
	return (len);
}
