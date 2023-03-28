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
	int i;

	/* Loop through the string, printing every other character */
	for (i = 0; *(str + i) != '\0'; i += 2)
	{
		_putchar(*(str + i));
	}

	/* Print a newline character at the end */
	_putchar('\n');
}
