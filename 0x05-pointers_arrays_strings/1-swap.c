#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
