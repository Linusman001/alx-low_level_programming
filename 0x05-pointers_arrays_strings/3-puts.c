#include "main.h"

/**
 * _puts - function that prints a string, followed
 * @str: variable to be printed
 * by a new line, to stdout.
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
