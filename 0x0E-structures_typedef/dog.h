#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Sperro
 * @name: nombre
 * @age: edad
 * @owner: duenio
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * t_dog - Typedef tipo perro
 */
typedef struct dog t_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
