#include "main.h"
/**
 * *_strcpy - Copies the string pointed to by src,
 * including the terminating null byte
 * to the buffer pointed to by dest.
 * @dest: Destination buffer for string copy.
 * @src: Source string to be copied.
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (temp);
}
