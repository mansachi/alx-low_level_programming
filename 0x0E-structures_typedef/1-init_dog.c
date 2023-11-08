/**
 * This is a program for file 1-init_dog.c
 */

#include "dog.h"

/**
 * init_dog - this will always initialize the
 * dog structure efficiently
 *
 * @d: this is the structure object only.
 * @name: 1st number only
 * @age: 2nd member
 * @owner: 3rd member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
