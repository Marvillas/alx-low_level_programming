#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s)
	{
		for (ptr = accept; *ptr; ptr++)
		{
			if (*s == *ptr)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
