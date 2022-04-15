#include "main.h"
/**
 * print_square - print a square
 *@size: size of square to be printed
 **
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			y = 0;
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			_putchar('\n');
		}
	}
}
