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
	while (num < 16)
	{
		printf("%x", num);
		num++;
	}
	printf("\n");
	return (0);
}
