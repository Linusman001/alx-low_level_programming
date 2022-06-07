#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times followed by a new line
 *
 * Return: Nothing void
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
	return (0);
}
