#ifndef DOG_H
#define DOG_H

/**
 * struct dog - descirbes a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog's owner
 */

struct dog
{
	char *name;
	double age;
	char *owner;
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
