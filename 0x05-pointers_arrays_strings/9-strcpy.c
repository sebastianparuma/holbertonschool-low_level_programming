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
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
