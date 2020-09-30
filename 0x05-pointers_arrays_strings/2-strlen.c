#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @str: String.
 *
 * Return: Length of @str.
 */
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
