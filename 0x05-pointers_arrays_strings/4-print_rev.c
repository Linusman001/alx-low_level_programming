#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: to be printed
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count--;
	}
}
