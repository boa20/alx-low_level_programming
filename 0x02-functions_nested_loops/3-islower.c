#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: contains value to be compared
 * Return: Returns 1 if lower and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
