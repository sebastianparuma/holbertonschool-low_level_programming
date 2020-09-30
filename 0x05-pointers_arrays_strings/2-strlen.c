#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String.
 *
 * Return: Length of @s.
 */
int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; *s; s++)
		lenght++;

	return (lenght);
}
