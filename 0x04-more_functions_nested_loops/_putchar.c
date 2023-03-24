#include <unistd.h>
/**
 * _putchar - Writes a single character to stdout
 * @c: The character to be written.
 *
 * Return: Always 1 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
