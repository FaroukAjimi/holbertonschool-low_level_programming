#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int i;
	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s[i] = '0';
		i++;
	}
	return (s);
}
