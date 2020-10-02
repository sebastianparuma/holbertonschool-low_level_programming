#include "holberton.h"

/**
 * strcat - Concatenates two strings.
 * @dest: Pointer.
 * @src: String.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; dest[i]; i++);

	while (*src)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}
