#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - makes a new struct dog.
 * @name: name input.
 * @age: age input.
 * @owner: owner input
 *
 * Return: struct dog.
 * when unsuccessful, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int a, aname, aowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (aname = 0; name[aname]; aname++)
		;

	for (aowner = 0; owner[aowner]; aowner++)
		;

	p_dog->name = malloc(aname + 1);
	p_dog->owner = malloc(aowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (a = 0; a < aname; a++)
		p_dog->name[i] = name[i];
	p_dog->name[a] = '\0';

	p_dog->age = age;

	for (a = 0; a < aowner; a++)
		p_dog->owner[a] = owner[a];
	p_dog->owner[a] = '\0';

	return (p_dog);
}
