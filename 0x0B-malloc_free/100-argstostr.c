#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenate all arguments of the program
 * @ac: int number of arguments
 * @av: The array of arguments
 *
 * Return: A pointer to the concatenated string
 * or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_len, current_index;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
	}
	total_len += ac;

	str = malloc(sizeof(char) * total_len + 1);
	if (str == NULL)
		return (NULL);

	current_index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[current_index] = av[i][j];
			current_index++;
		}
		if (str[current_index] == '\0')
		{
			str[current_index++] = '\n';
		}
	}
	str[current_index] = '\0';

	return (str);
}
