#include "dog.h"
#include <stlib.h>
/**
 * init_dog - the function
 * dog - the struct
 * @d: first parameter
 * @name: second parameter
 * @age: third parameter
 * @owner: fourth parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d = NULL)
		return (1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
