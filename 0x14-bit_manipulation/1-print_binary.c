#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 *@n: opo
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = sizeof(unsigned long int);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	mask = n;
	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
	}
}
