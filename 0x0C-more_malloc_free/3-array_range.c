#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: First value.
 * @max: Last value.
 *
 * Return: The pointer to the newly created array.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
