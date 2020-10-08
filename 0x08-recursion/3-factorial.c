#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Number.
 *
 * Return: The factorial of n if n is greater than 0.
 * -1 If n is less than 0
 *
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
