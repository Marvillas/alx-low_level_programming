#include "main.h"

/**
 * islower: print out the character if it is in lower case
 *
 * Return: 0 if success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
