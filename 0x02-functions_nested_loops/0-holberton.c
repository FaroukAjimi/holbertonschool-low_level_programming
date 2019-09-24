#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
char ch[] = "Holberton";
while (i <= 8)
{
		_putchar (ch[i]);
		i = i + 1;
}
	_putchar ('\n');
	return (0);
}
