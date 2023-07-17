#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - new typedef for the struct dog.
 */
typedef struct dog dog_t;

/**
 * struct dog - struct to store information.
 * @name: stores name
 * @age: stores age
 * @owner: stores owner name
 *
 * Description: struct dog stores the name,age
 * and name of owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
