#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - check the code
 * @name: la estructura perro
 * @age: df
 * @owner: dfds
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogi = NULL;

	dogi = malloc(sizeof(dog_t));

	if (dogi)
	{
		dogi->name = strdup(name);
		if (!dogi->name)
		{
			free(dogi);
			return (NULL);
		}

		dogi->age = age;
		dogi->owner = strdup(owner);
		if (!dogi->owner)
		{
			free(dogi);
			return (NULL);
		}
	}
	return (dogi);
}
