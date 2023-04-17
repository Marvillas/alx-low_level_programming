#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct to represent information about a dog
 * @name: the name of the dog (char)
 * @age: the age of the dog (float)
 * @owner: the name of the dog's owner (char)
 *
 * Description: This struct represents information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

