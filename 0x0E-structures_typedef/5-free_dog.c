#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees a struct dog
 * @d: The dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	/* Check if the dog is non-null */
	if (d == NULL)
		return;

	/* Free the memory allocated for the name string */
	free(d->name);

	/* Free the memory allocated for the owner string */
	free(d->owner);

	/* Free the memory allocated for the dog struct */
	free(d);
}
