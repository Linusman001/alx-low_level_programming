#include "main.h"

/**
 * create_array - function that creates an array of chars, and
 * initializes it with a specific char.
 * @size: indices of arrays
 * @c: character to be initialized
 * Return: NULL if size = 0 else pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	int i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
