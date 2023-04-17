#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int l1, l2;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	l1 = strlen(name);
	l2 = strlen(owner);

	newdog->name = malloc(sizeof(char) * (l1 + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (l2 + 1));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}

	newdog->age = age;
	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	return (newdog);
}
