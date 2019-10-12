#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - converests a string
 * @s: string to convert
 * Return: numbre
 */
int _atoi(char *s)
{
	int x, i, c;
	c = 1;
	i = x = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			c = c * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (x >= 0)
		{
			x = x * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			x = x * 10 - (s[i] - '0');
			i++;
		}
	}
	c = c * -1;
	return (x *c);
}
