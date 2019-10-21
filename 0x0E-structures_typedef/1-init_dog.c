#include "dog.h"
/**
 *init_dog - gilmour
 *@d: Polution
 *@name: is
 *@age: hard
 *@owner: godamn
 *Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
