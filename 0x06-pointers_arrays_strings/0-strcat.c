#include <string.h>
#include "main.h"

/**
 * _strncat - Concatenate two strings, using at most n bytes from src.
 *
 * @dest: The destination string
 * @src: The source string.
 * @n: The maximum number of bytes to use from the source string.
 * Return: A pointer to the resulting null-terminated string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';
	return (dest);
}
