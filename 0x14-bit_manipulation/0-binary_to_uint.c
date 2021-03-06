#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: ooo
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int s = 1;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		if (b[len] == '1' || b[len] == '0')
		{
			if (b[len] == '1')
			{
				num += s;
			}
			len--;
			s = s + s;
		}
		else
			return (0);
	}
	return (num);
}
