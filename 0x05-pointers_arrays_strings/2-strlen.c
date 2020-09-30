#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @str: String.
 *
 * Return: Length of @str.
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
