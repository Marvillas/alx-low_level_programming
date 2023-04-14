#include <stdlib.h>
#include "main.h"

void *allocate_memory(unsigned int size);
void copy_memory(void *src, void *dest, unsigned int size);

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: the size of the allocated space for ptr
 * @new_size: the new size of the memory block
 *
 * Return: pointer to the newly allocated memor
 * or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (allocate_memory(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = allocate_memory(new_size);
	if (!new_ptr)
	{
		return (NULL);
	}
	copy_memory(ptr, new_ptr, (old_size < new_size) ? old_size : new_size);

	free(ptr);
	return (new_ptr);
}

/**
 * allocate_memory - allocates memory using malloc
 * @size: size of the memory to allocate
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */
void *allocate_memory(unsigned int size)
{
	void *ptr = malloc(size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

/**
 * copy_memory - copies memory from one location to another
 * @src: source memory location to copy from
 * @dest: destination memory location to copy to
 * @size: size of the memory to copy
 */
void copy_memory(void *src, void *dest, unsigned int size)
{
	char *src_ptr = (char *)src;
	char *dest_ptr = (char *)dest;
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		*(dest_ptr + i) = *(src_ptr + i);
	}
}
