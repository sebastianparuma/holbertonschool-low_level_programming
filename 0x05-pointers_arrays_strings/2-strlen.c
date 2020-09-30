#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @str: String.
 *
 * Return: Length of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
