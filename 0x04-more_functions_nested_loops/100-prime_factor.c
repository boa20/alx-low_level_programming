#include <stdio.h>
/**
 * main - print largest prime factor of a number
 **
 * return: returns 0 always
 */
int main(void)
{
	unsigned int a = 2;
	unsigned long num = 612852475143;

	while (a != num)
	{
		if (num % a == 0)
		{
			num = num / a;
		}
		else
		{
			a++;
		}
	}
	printf("%lu\n", num);
	return (0);
}


