#include <stdlib.h>
#include "main.h"
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
	int i, k = 0, len = 0, words, c = 0, start, end;
	int j;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	word_array = (char **) malloc(sizeof(char *) * (words + 1));
	if (word_array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				for (j = start; j < end; j++)
					tmp[j - start] = str[j];
				tmp[c] = '\0';
				word_array[k++] = tmp;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	word_array[k] = NULL;

	return (word_array);
}
