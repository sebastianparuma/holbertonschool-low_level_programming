#include "holberton.h"

/**
 * _strcpy - Copies the string pointed to by @src, including the
 * terminating null byte (\0), to a buffer pointed to by @dest.
 * @dest: Buffer.
 * @src: String.
 *
 * Return: Pointer to @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
