#include "dog.h"

/**
 * init_dog - check the code
 * @d: la estructura perro
 * @name: nombre
 * @age: edad
 * @owner: duenio
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
