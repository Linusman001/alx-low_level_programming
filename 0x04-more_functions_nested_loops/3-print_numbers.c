#include "main.h"

/**
 * print_numbers - a function that prints a number from 0 to 9
 * followed by a new line
 * Return: 0
 */
void print_numbers(void)
{
	for (a = 0; a <= 9; a++)
	{
		_putchar(a);

		_putchar('\n');
	}
	return (0);
}
