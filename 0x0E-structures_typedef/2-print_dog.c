#include "dog.h"
#include "stdio.h"

/**
 * print_dog - check the code
 * @d: la estructura perro
 * Return: void
 */

void print_dog(struct dog *d)
{
        if (d)
        {
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
	
		if (d->age == '\0')
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);

		printf("Owner: %s\n", d->owner);
        }
}
