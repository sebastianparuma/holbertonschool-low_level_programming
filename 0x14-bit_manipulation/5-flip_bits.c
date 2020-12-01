#include "holberton.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to
 * get from one number to another.
 * @n: Number.
 * @m: Number to flip @n to.
 *
 * Return: Number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
