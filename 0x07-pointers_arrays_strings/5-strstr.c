#include "holberton.h"
/**
 * _strstr - dsffsdfsdf
 * @haystack: gfsdgdsgsdfg
 * @needle: fdfdfdfdf
 *
 * Return: Always
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
