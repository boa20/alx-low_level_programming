#include "main.h"
/**
 * _islower - checks for lowercase character
 * *
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
