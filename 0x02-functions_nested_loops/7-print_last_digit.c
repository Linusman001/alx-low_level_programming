#include "main.h"

/**
 * print_last_digit - prints the last digit of number(s)
 * @a: the last digit of it is to be printed
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
	if ((a % 10) < 0)
		(a % 10) *= -1;
	_putchar((a % 10) + '0');

	return (a % 10);
}
