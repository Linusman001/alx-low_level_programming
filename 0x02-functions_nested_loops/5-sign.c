#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: is to be checked
 *
 * Return: 1 if positive, 0 if zero, otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return ('+');
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
