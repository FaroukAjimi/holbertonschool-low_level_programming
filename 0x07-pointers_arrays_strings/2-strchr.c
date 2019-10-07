#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i=0;
	int y=0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (y <= i)
	{
		if (s[y] == c)
			return (&(s[y]));
		y++;
	}
	return (0);
}
