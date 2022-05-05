#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the function
 * @argc: the argument count
 * @argv: the argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
