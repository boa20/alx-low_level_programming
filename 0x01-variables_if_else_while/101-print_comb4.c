#include <stdio.h>
/**
 * main - Starting point
 * *
 * Return: returns 0
 */
int main(void)
{
	int num, num2, num3;

	num = 0;
	while (num < 10)
	{
		num2 = num + 1;
		while ((num2 > num) && (num2 < 10))
		{
			num3 = num2 + 1;
			while ((num3 > num2) && (num3 < 10))
			{
				putchar(num + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if ((num == 7) && (num2 == 8) && (num3 == 9))
				{
				break;
				}
				putchar(',');
				putchar(' ');
				num3++;
			}
			num2++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
