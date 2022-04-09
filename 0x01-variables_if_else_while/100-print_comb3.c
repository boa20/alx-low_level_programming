#include <stdio.h>
/**
 * main - Starting point
 * *
 * Return: returns 0
 */
int main(void)
{
	int num, num2;

	num = 0;
	while (num < 10)
	{
		num2 = num + 1;
		while ((num2 > num) && (num2 < 10))
		{
			putchar(num + '0');
			putchar(num2 + '0');
			if ((num == 8) && (num2 == 9))
			{
				break;
			}
			putchar(',');
			putchar(' ');
			num2++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
