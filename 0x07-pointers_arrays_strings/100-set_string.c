 #include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer we need to set
 * @to: string to set
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
