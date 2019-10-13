#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 *main - hello
 *@argc: NUM
- *@argv: array
 *Return: 1 in case of error
 */
int main(int argc, char *argv[])
{
	int count;
	int val1;
	int stock = 0;

	if (argc - 1 >= 0)
	{
		for (count = 1; count < argc ; count++)
		{
			if (number(argv[count]) == 0)
			{
			val1 = atoi(argv[count]);
			stock = stock + val1;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", stock);
	return (0);
}
/**
 *number - check if it's an integer
 *@c: array
 *Return: 0
 */
int number(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (isdigit(c[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}
