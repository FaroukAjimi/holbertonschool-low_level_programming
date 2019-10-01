#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 *@s:fdkfldfdlf
 *Return: always
 */
void rev_string(char *s)
{
int aux;
int z;
int j = 0;
int i = 0;

while ((*(s + i) != '\0'))
{
	i++;
}
	z = i / 2;
while ((j <= z))
{
	aux = s[j];
	s[j] = s[i - 1];
	s[i - 1] = aux;
	j++;
	i--;
}
}
