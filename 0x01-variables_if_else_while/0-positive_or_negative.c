#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This is the starting point of the program
 * *
 * Return - The program returns 0 after execution
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* My code */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is 0\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
