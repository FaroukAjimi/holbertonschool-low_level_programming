#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for Holberton School students.
 *@str: hello
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int size;

	size = 0;
	i = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	if (size > 0)
	{
	s = malloc(sizeof(char) * size);
	if (s == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
	}
	else
		return (NULL);
}
