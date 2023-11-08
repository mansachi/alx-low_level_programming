/**
 * This is a program for dog.h
 */

#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - this is the structure for,
 * the dog object.
 *
 * @name: 1st number only
 * @age: 2nd number only
 * @owner: 3rd number only
 */

/**
 * This is the source code
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - this is the typedef prototype,
 * for the dog structure only.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

/**
 * This ends the program
 */

#endif
