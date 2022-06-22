#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string whose length is to be counted
 * Return: 1 + _strlen_recursion(s + 1)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
