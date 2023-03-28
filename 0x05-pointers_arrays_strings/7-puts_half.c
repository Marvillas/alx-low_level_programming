#include "main.h"
/**
 * puts_half - Prints the second half of a string
 *
 * @str: Pointer to the string to print
 *
 * Return: None
 */
void puts_half(char *str)
{
	int i;
	int length = _strlen(str);
	int n = (length % 2 == 0) ? length / 2 : (length - 1) / 2;

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
