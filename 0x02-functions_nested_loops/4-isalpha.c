#include "main.h"

/**
 * _isalpha - checks for uppercase character
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 success
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
