#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @str: Pointer to the input string
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
	char *rot13_str = str;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_letters = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				rot13_str[i] = rot13_letters[j];
				break;
			}
		}
	}

	return (rot13_str);
}
