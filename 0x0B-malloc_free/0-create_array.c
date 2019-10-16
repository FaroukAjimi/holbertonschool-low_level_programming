#include <stdlib.h>
#include "holberton.h"
/**
 *create_array - malloc instead
 *@size: the size of the array
 *@c: conetent of the array
 *Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	i = 0;
	s = malloc(sizeof(char) * size);
	if (s == 0)
		return (NULL);
	if (size > 0)
	{
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
	}
	else
		return (NULL);
}
