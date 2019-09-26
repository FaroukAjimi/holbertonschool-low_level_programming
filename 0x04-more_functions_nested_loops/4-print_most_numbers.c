#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: adsds
 */
void print_most_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		if (a != '0' && a != '9')
		{
		_putchar(a);
		}
		a++;
	}
	_putchar ('\n');
}
