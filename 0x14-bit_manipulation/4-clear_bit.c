#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - check the code for Holberton School students.
 *@n: oppo
 *@index: kikk
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(n) * 8))
		return (-1);
	i = 1 << index;
	*n &= ~(i);
	return (1);
}
