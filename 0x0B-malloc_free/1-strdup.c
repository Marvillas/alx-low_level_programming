#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string, or
 * NULL if str = NULL or memory allocation fails
 */
char *_strdup(char *str)
{
	int length;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;
	dup_str = malloc(length * sizeof(char));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	_memcpy(dup_str, str, length);

	return (dup_str);
}
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to copy
 *
 * Return: pointer to the destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (i < n);

	return (dest);
}
