sinclude "funtion_pointers.h"
/**
 * print_name - prints a name using a given function
 * @name: pointer to the name string
 * @f: pointer to the function used to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}