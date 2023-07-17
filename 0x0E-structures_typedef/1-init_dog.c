#include "dog.h"

/**
 * init_dog - initialize variables of a struct of typedef
 * @d: pointer to struct dog.
 * @name: name variable
 * @age: age variable
 * @owner: owner variable.
 *
 * Return: void.
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
