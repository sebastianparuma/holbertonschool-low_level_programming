# include "holberton.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer
 * @c: Character
 * @n: Number of bytes
 *
 * Return: Pointer to the memory area @s.
 */
void *_memset(void *s, int c, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
