#include "main.h"
/**
 * File: 1-print_rev_recursion.c
 * Auth: Philia Hammond
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
