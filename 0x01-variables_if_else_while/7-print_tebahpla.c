#include <stdio.h>

/**
 * main - Prints lowercase letters in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar(alpha);

	return (0);
}
