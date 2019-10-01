#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 *@str: dflkdjfdfjdm
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int z;
	int i = 0;

	while ((*(str + i) != '\0'))
	{
		i++;
	}
	if (i % 2 == 0)
		z = i / 2;
	else
		z =i-((i - 1) / 2);
	while (z != i)
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
