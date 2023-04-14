#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array of nmemb
 * @nmemb: number of elements to allocate
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
