#include <string.h>
#include "main.h"

/**
 * is_palindrome - checks if a given string is a palindrome or not
 * @s: the  char string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - recursive helper function for is_palindrome
 * @s: the char string to be checked
 * @start: the int starting index of the string
 * @end: the int ending index of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_helper(s, start + 1, end - 1));
}
