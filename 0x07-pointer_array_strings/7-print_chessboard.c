#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i=0;
	int y=0;
	while (i < 8)
	{
		y=0;
		while (y < 8)
		{
			_putchar(a[i][y]);
			y++;
		}
		i++;
		_putchar('\n');
}
}
