#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 *@s: fdkfjmldfkdf
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while ((*(s + i) != '\0'))
	{
		i++;
	}
	i = i - 1;
	while ((*(s + i) != 0))
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
