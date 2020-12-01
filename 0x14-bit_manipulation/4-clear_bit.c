#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the bit.
 * @index: Index, starting from 0 of the bit you want to set.
 *
 * Return: - 1 If an error occurred.
 * 1 if it worked.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
