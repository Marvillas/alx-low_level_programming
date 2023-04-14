#include "main.h"
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if successful, 98 if error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int i;

	/* Check number of arguments */
	if (argc != 3)
	{
		for (i = 0; "Error\n"[i] != '\0'; i++)
		{
			_putchar ("Error\n"[i]);
		}
		return (98);
	}

	/* Check if numbers are valid */
	num1 = argv[1];
	num2 = argv[2];
	if (!is_digit(num1) || !is_digit(num2))
	{
		exit(98);
	}

	/* Multiply the numbers */
	multiply(num1, num2);
	return (0);
}
/**
 * multiply - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 *
 * Return: the result of the multiplication
 */
int multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k, carry, res;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = _calloc(len1 + len2, sizeof(int));
	if (result == NULL)
		return (-1);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			res = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
			carry = res / 10;
			result[i + j + 1] = res % 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;

	for (k = i; k < len1 + len2; k++)
		_putchar(result[k] + '0');
	_putchar('\n');

	free(result);
	return (0);
}
/**
 * is_digit - checks if a string is composed of digits only
 * @str: the string to check
 *
 * Return: 1 if str is composed of digits only, 0 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}
/**
 * _calloc - allocates memory for an array of nmemb
 * @nmemb: number of elements to allocate
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
