#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code for Holberton School students.
 *@d: HELL
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == 0)
	{
		d->name= "(nil)";
		return;
	}
	if (d->owner == 0)
	{
		d->owner = "(nill)";
		return;
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
