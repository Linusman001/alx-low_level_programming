#include "main.h"

/**
 * int _islower - checks for lower case
 *
 * Return 1 if c is a lowercase
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
