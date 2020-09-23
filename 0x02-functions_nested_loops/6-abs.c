#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: Integer.
 *
 * Return: Absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
