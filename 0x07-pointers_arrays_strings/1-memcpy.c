#include "holberton.h"

/**
 * _memcpy - Copies memory area
 * @dest: Pointer
 * @src: Source buffer
 * @n: Number of bytes
 *
 * Return: Pointer to @dest.
 */
void *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
