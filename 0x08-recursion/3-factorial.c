#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: the given number
 * Return: if n < 0 or n = 0. -1 or 1 respectively
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
