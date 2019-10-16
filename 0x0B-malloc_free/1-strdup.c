#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int size;

	size=0;
	i=0;
	while (str[size] != '\0')
	{
		size++;
	}
	if (size > 0)
	{
	s = malloc(sizeof(char)*size);
	while (i < size)
	{
		s[i]=str[i];
		i++;
	}
	return (s);
	}
	else
		return (NULL);
}
