#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - check the code for Holberton School students.
 *@n : fdooo
 *@index: pooolo
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(n) * 8))
		return (-1);
	i = 1 << index;
	*n = *n | i;
	return (1);
}
