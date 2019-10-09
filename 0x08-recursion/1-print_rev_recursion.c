#include "holberton.h"

/**
 * _print_rev_recursion - check the code for Holberton School students.
 * @s: kdjfdkfjd
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	i++;
	if (s[i] != '\0')
	{

		_print_rev_recursion(&s[i]);
	}
	_putchar(s[i - 1]);
	i--;
	if (s[i] != s[0])
	{
		_print_rev_recursion(&s[i]);
	}
}
