#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: to be printed
 */
void print_rev(char *s)
{
	int count;
	count = strlen(s);

	for (; count >= 0; count--)
	{
		if (s[count] == '0')
		{
			break;
		}
		_putchar(s[count]);
		_putchar('\n');
	}
}
