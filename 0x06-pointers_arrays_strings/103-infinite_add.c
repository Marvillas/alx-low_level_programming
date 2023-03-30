#include "main.h"
#include <string.h>
/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: A pointer to the result, or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2), carry = 0, i = 0, j = 0, k;

	if (len1 + len2 + 1 > size_r)
		return (0);

	for (i = 0; i < len1 || i < len2 || carry; i++)
	{
		if (i < len1)
			carry += n1[len1 - i - 1] - '0';
		if (i < len2)
			carry += n2[len2 - i - 1] - '0';

		r[i] = carry % 10 + '0';
		carry /= 10;
	}

	if (i == 0)
		r[i++] = '0';

	r[i] = '\0';

	for (j = 0, k = i - 1; j < k; j++, k--)
	{
		char tmp = r[j];

		r[j] = r[k];
		r[k] = tmp;
	}

	return (r);
}
