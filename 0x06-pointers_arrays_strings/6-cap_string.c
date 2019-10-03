#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 *@s: fkdhfkldjf
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i = 0;
	int y;

	while (s[i] != '\0')
	{
		i++;
	}

	for (y = 0; s[y] != '\0'; y++)
	{
		if (y == 0)
		{
			if (s[y] >= 97 && s[y] <= 122)
			{
				s[y] -= 32;
			}
		}
		if (s[y] == '\n' || s[y] == '\t' || s[y] == ' ' || s[y] == '.'
		    || s[y] == ';' || s[y] == ',' || s[y] == '!' || s[y] == '?'
		    || s[y] == '"' || s[y] == '(' || s[y] == ')' || s[y] == '{'
		    || s[y] == '}')
		{
			if (s[y + 1] >= 97 && s[y + 1] <= 122)
				s[y + 1] -= 32;
		}
	}
	return (s);
}
