#include "function_pointers.h"

/**
 * array_iterator - iterates over an array and executes a given function
 *on each element
 * @array: pointer to the integer array
 * @size: size of the array
 * @action: pointer to the function to be used on each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
