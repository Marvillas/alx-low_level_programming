#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	int i = 0;
	char *leet = "aAeEoOtTlL44337011";

	while (str[i] != '\0')
	{
		int j = 0;

		while (leet[j] != '\0')
		{
			if (str[i] == leet[j] || str[i] == leet[j + 1])
			{
				str[i] = leet[j + 10];
				break;
			}
			j += 2;
		}

		i++;
	}

	return (str);
}
