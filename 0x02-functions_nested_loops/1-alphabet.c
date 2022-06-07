#include "main.h"

/**
 * main - Prints alphabet
 *
 * Return: Nothing Void
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter < 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

	return (0);
}
