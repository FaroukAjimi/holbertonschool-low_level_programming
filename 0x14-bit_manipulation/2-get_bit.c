#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - check the code for Holberton School students.
 *@n: fsdfsds
 *@index: dsd s
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	if (index > (sizeof(n) * 8))
		return (-1);
	i = 1 << index;
	if (n & i)
		return (1);
	else
		return (0);
}
