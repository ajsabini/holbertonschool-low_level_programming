#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - check the code
 * @name: la estructura perro
 * @age: df
 * @owner: dfds
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogi;

	dogi = malloc(sizeof(dog_t));

	if (dogi == NULL)
		return (NULL);

	dogi->name = name;
	dogi->age = age;
	dogi->owner = owner;
	return (dogi);
}
