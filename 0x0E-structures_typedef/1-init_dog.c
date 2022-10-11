#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type truct dog.
 * @d: pointer to structure.
 * @name: 1st member.
 * @age: 2nd member.
 * @owner: 3rd number.
 *
 *Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
