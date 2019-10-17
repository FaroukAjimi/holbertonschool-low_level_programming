#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *s;
	int i = 0;

	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	while (min <= max)
	{
		s[i] = min;
		min++;
		i++;
	}
	return (s);
}
