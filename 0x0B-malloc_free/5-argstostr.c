#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - check the code for Holberton School students.
 *@ac: action
 *@av: double
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, x;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			x++;
	}
	s = malloc(sizeof(char) * x + 1 + ac);
	x = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[x] = av[i][j];
			x++;
		}
	s[x] = '\n';
	x++;
	}
	return (s);
}
