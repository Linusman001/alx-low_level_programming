#include "main.h"

/**
 * _pow_recursion - function that returns the value of
 *			x raised to the power of y.
 * @x: first value
 * @y: second value
 * Return: -1 if y < 0 else x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1 / _pow_recursion(x, -y));
}
