#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - liberar dog
 * @d: puntero perro
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
