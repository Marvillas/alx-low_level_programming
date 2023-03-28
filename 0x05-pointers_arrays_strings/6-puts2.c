#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first
 *
 * @str: Pointer to the string to print
 *
 * Return: None
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len])
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
