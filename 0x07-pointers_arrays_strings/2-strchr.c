#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: the character to search for
 *
 * Return: pointer to occurrence of c in the string s, else
 * Null if the character is not found
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);

		s++;
	} while (*s != '\0');

	return (NULL);
}
