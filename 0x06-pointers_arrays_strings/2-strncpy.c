#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 *@dest: fdfdf
 *@src: fkdljflkdjfd
 *@n: fkdjfkdjfkldfj
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int y = 0;
	int z = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	while (src[z] != '\0')
	{
		z++;
	}
	while (i < n)
	{
		if (src[n - 1] != '\0')
			dest[i] = src[i];
		if (i > sl)
			dest[i] = '\0';
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}
