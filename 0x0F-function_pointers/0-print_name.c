#include "funtion_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name using a given function
 * @name: pointer to the name string
 * @f: pointer to the function used to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
