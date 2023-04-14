#include <stdlib.h>
#include "main.h"

unsigned int str_len(char *str);
char *copy_string(char *dest, char *src, unsigned int n);

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * @n: the maximum number of bytes to concatenate from s2
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *concat_str;

	if (s1)
	{
		len1 = str_len(s1);
	}
	if (s2)
	{
		len2 = str_len(s2);
	}
	if (n >= len2)
	{
		n = len2;
	}
	concat_str = malloc(sizeof(char) * (len1 + n + 1));
	if (!concat_str)
	{
		return (NULL);
	}
	copy_string(concat_str, s1, len1);
	copy_string(concat_str + len1, s2, n);
	concat_str[len1 + n] = '\0';
	return (concat_str);
}
/**
 * str_len - returns the length of a string
 * @str: the string to find the length of
 *
 * Return: the length of the string
 */
unsigned int str_len(char *str)
{
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	return (len);
}

/**
 * copy_string - copies a string to a destination
 * @dest: the destination to copy to
 * @src: the source to copy from
 * @n: the number of characters to copy
 *
 * Return: pointer to the destination string
 */
char *copy_string(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
