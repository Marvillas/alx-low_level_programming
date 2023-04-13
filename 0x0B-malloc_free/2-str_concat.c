#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to a newly allocated space in memory
 * containing the concatenated strings, null terminated
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}

	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	concat_str = (char *) malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	_memcpy(concat_str, s1, len_s1);
	_memcpy(concat_str + len_s1, s2, len_s2 + 1);

	return (concat_str);
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
