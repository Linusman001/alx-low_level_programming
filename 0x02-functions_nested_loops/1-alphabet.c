#include "main.h"

/**
 * print_alphabet - Prints alphabet
 *
 * Return: Nothing Void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

}
