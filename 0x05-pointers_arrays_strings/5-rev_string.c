#include "main.h"
/**
 * rev_string - Reverses a string in place
 *
 * @s: Pointer to the string to be reversed
 *
 * Return: None
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char tmp;

	/* Get the length of the string */
	while (*(s + length) != '\0')
	{
		length++;
	}

	/* Swap characters to reverse the string */
	for (i = 0; i < length / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + length - i - 1);
		*(s + length - i - 1) = tmp;
	}
}
