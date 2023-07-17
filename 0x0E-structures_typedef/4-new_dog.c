#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of a string
* @s: string to evaluate
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	int a;
	
	a = 0;
	while (s[a] != '\0')
		{
			a++;
		}


		return (a);
	}


	/**
	 * *_strcpy - copies the string.
	 * together with terminating null byte (\0)
	 * to the buffer.
	 * @dest: pointer to the buffer in which we copy the string
	 * @src: string copied
	 *
	 * Return: the pointer to dest
	 */
	char *_strcpy(char *dest, char *src)
	{
		int length, b;


		length = 0;


		while (src[length] != '\0')
		{
			length++;
		}


		for (b = 0; b < length; b++)
		{
			dest[b] = src[b];
		}
		dest[b] = '\0';


		return (dest);
	}


	/**
	 * new_dog - creates new struct
	 * @name: name input
	 * @age: age input
	 * @owner: owner input.
	 *
	 * Return: pointer to new struct (Success), NULL otherwise
	 */
	dog_t *new_dog(char *name, float age, char *owner)
	{
		dog_t *dog;
		int length1, length2;


		length1 = _strlength(name);
		length2 = _strlength(owner);


		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);


		dog->name = malloc(sizeof(char) * (length1 + 1));
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * (length2 + 1));
		if (dog->owner == NULL)
		{
			free(dog);
			free(dog->name);
			return (NULL);
		}
		_strcpy(dog->name, name);
		_strcpy(dog->owner, owner);
		dog->age = age;


		return (dog);
	}

