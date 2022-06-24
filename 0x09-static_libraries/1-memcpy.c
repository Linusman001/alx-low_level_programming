#include "main.h"

/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: pointer to the destination memory area
 * @src: pointer to memory area src
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
