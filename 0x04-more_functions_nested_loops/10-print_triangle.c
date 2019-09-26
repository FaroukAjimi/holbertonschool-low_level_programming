#include "holberton.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, z;
	if (size <= 0)
		_putchar('\n');
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < (size - (x + 1)); y++)
			_putchar(' ');
		for (z = 0; z < (x + 1); z++)
			_putchar('#');
		_putchar('\n');
	}
}
