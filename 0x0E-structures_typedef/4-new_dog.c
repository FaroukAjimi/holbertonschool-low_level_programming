#include <stdlib.h>
#include "dog.h"
/**
 *_slen - HO
 *@s : hh
 *Return:oo
 */
int _slen(char *s)
{
	int i = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		c++;
		i++;
	}
	return (0);
}
/**
 * new_dog - check the code for Holberton School students.
 *@name: google
 *@age: yahoo
 *@owner: hotmail
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	dog_t *s = malloc(sizeof(dog_t));

	if (s == NULL || name == '\0' || owner == '\0')
		return (NULL);
	s->name = malloc(sizeof(char) * (_slen(name) + 1));
	s->owner = malloc(sizeof(char) * (_slen(owner) + 1));
	if (s->name == NULL || s->owner == NULL)
	{
		free(s->name);
		free(s->owner);
		free(s);
		return (NULL);
	}
		while (name[i] != '\0')
		{
			s->name[i] = name[i];
			i++;
		}
		s->name[i] = '\0';
		for (i = 0; owner[i]; i++)
			s->owner[i] = owner[i];
		s->owner[i] = '\0';
		s->age = age;
		return (s);
	}
