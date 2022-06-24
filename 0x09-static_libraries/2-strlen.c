#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 * @s: variable to be checked
 * Return: 0
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s++)
		length++;

	return (length);
}
