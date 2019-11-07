#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - check the code for Holberton School students.
 *@n: kkk
 *@m: jjsjdsdl
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int l = 0;
	n = n ^ m;
	while (n > 0)
	{
		if (n & 1)
			l++;
		n >>= 1;
	}
	return (l);
}
