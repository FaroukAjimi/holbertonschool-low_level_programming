#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1=0;
	unsigned int size2=0;
	unsigned int i=0;
	unsigned int y=0;
	char *s;
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	s = malloc(sizeof(char) * (size1+size2));
	if (size1 > 0 && size2 > 0)
	{
	while (i < size1)
	{
		s[i]=s1[i];
		i++;
	}
	while (i < (size2 + size1))
	{
		s[i]=s2[y];
		i++;
		y++;
	}
	return(s);
	}
	else
		return (NULL);
}
