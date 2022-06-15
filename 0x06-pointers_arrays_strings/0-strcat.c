#include ""main.h"

/** *_strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 * @dest: destination variable to be appended
 * @src: variable to be concantenated to dest
 * Return: pointer pointing to resulting dest
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}

	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';

	return (*dest);
}
