#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	char *leet_str = str;
	char *letters = "aAeEoOtTlL";
	char *leet_letters = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				leet_str[i] = leet_letters[j];
				break;
			}
		}
	}

	return (leet_str);
}
