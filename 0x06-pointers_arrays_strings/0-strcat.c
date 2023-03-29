#include <string.h>
#include "main.h"

/**
 * _strcat - Concatenate two strings, using at most n bytes from src.
 *
 * @dest: The destination string
 * @src: The source string.
 * Return: A pointer to the resulting null-terminated string dest.
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
