#include <stdio.h>
/**
 * main - Starting point
 * *
 * Return: returns 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
