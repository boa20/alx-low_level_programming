#include "main.h"
/**
 * print_triangle - print a triangle
 *@size: size of triangle to be printed
 **
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			y = 0;
			while (y < size - x)
			{
				_putchar(' ');
				y++;
			}
			for (z = 0; z < x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
