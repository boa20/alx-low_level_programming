#include "main.h"
/**
 * _isdigit - Checks for digit
 * @c: digit to be checked
 * Return: Returns 1 when digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
