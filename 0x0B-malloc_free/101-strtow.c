#include <stdlib.h>
#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of bytes to copy
 *
 * Return: a pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * count_word - count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	if (*s == '\0')
		return (0);
	if (*s == ' ')
		return (count_word(s + 1));
	return (1 + count_word(s + 1));
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **word_array, *tmp;
	int i, k, words, start, end, len;

	if (!str || !*str)
		return (NULL);

	words = count_word(str);
	if (!words)
		return (NULL);

	word_array = malloc(sizeof(char *) * (words + 1));
	if (!word_array)
		return (NULL);

	for (i = 0, k = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		start = i;
		while (str[i] && str[i] != ' ')
			i++;
		end = i;
		len = end - start;
		if (str[end - 1] == '.')
			len--;
		tmp = malloc(sizeof(char) * (len + 1));
		if (!tmp)
		{
			while (k--)
				free(word_array[k]);
			free(word_array);
			return (NULL);
		}
		_strncpy(tmp, str + start, len);
		tmp[len] = '\0';
		word_array[k++] = tmp;
	}

	word_array[k] = NULL;
	return (word_array);
}
