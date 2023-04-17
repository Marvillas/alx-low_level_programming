#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: A pointer to the struct dog to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d == NULL)
		return;

	name = d->name != NULL ? d->name : "(nil)";
	age = d->age;
	owner = d->owner != NULL ? d->owner : "(nil)";

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, age, owner);
}
