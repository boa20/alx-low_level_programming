#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 **
 *Return: returns 0
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code */
	l = n % 10;
	if (l > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, l);
	}
	else if ((l < 6) && (l != 0))
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
