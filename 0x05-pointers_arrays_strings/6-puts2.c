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
	char *p;

	for (p = str; *p != '\0'; p += 2)
	{
		_putchar(*p);
	}
	_putchar('\n');
}
