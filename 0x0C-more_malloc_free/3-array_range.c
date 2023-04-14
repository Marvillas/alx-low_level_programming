#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers containing values from min to max
 * @min: the min value of range included
 * @max: the max value of range included
 *
 * Return: pointer to the newly created array,
 * or NULL on failure or invalid input
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
