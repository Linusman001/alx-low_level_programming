#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc);
	return (0);
}
