#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns the length of a string.
 * _strlen - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: NULL if str = NULL otherwise pointer to a new memory
 */
char *_strdup(char *str)
{
	int str_size;
	static char *dup;
	char *dup_offset;

	if (str == NULL)
		return (NULL);

	str_size = _strlen(str);
	dup = (char *)malloc(sizeof(char) * str_size + 1);

	if (dup == NULL)
		return ((char *)NULL);

	dup_offset = dup;

	while (*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';

	return (dup);
}
/**
 * _strlen - function that return the length of a string
 * @s: string to be checked
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
