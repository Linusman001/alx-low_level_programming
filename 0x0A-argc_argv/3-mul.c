#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mul = ((atoi(argv[1])) * (atoi(argv[2])));

		printf("%d\n", mul);
	}
	return (0);
}
