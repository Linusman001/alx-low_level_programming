#include "main.h"

/**
 * _islower - checks for lower case
 * @c: is to be checked
 *
 * Return: 1 if c is a lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
