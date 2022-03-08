#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - check the code
 * @d: la estructura perro
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dogi;

	dogi = malloc(sizeof(struct dog));
	if(dogi == NULL)
		return (NULL);
	dogi->name = name;
	dogi->age = age;
	dogi->owner = owner;
	return (dogi);	
}
