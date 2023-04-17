#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creats a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: the new dog's description
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
