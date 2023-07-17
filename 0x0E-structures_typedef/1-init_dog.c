#include "dog.h"

/**
 * init_dog - initialize dog struct
 *
 * @d: pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: input for dog owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
