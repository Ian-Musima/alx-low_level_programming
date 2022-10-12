#include "dog.h"

/**
 *init_dog - initializes a variable of type
 *struct dog.
 *@d:pointer to the struct
 *@name:name of dog.
 *@age:dog's age
 *@owner:dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
