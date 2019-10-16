#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i;
	int f;
	int y;

if (width <= 0 || height <= 0)
return (NULL);
s = malloc(sizeof(int *) * height);
if (s == '\0')
	return (NULL);
for (i = 0 ; i < height ; i++)
{
	s[i] = malloc(sizeof(int) * width);
	if (s[i] == 0)
	{
		for (f = 0 ; f < i ; f++)
			free(s[i]);
		free(s);
		return (NULL);
		for (y = 0; y < width; y++)
			s[i][y] = 0;
	}
}
return (s);
}
