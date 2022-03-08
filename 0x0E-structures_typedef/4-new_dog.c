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
	int i;

	dogi = malloc(sizeof(dog_t));

	if (dogi)
	{
		dogi->name = malloc(strlen(name) + 1);
		if (dogi->name)
		{
			for (i = 0; name[i]; i++)
				dogi->name[i] = name[i];
			dogi->name[i] = '\0';
		}
		else
		{
			free(dogi);
			return (NULL);
		}

		dogi->age = age;

		dogi->owner = malloc(strlen(owner) + 1);
		if (dogi->owner)
		{
			for (i = 0; owner[i]; i++)
				dogi->owner[i] = owner[i];
			dogi->owner[i] = '\0';
		}
		else
		{
			free(dogi->name);
			free(dogi);
			return (NULL);
		}
	}
	return (dogi);
}
