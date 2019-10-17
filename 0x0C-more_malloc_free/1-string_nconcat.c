#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 *@s1: First
 *@s2: second
 *@n: Number
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i = 0;
	unsigned int y = 0;
	char *s;

	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
		{
			size1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[size2] != '\0')
		{
			size2++;
		}
	}
	s = malloc(sizeof(char) * ((size1 + n) + 1));
	if (s == 0)
		return (NULL);
	while (i < size1)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < (size2 + n))
	{
		s[i] = s2[y];
		i++;
		y++;
	}
	s[i] = '\0';
	return (s);
}
