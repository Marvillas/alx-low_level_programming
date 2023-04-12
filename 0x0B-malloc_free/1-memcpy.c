#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to copy
 *
 * Return: pointer to the destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (i < n);

	return (dest);
}
