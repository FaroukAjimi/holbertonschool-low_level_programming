#include "holberton.h"
int _strlen_recursion(char *s);
int pal(char *s, int len, int i);
/**
 * _strlen_recursion - dfjdfkdfldf
 * @s: string pointer
 * Return: gkdhjfkdjfkd
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
/**
 * is_palindrome - fsqdfqsdfqsd
 * @s: sdffdfdfd
 * Return: fdfdfdfdf
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pal(s, len - 1, 0));
}
/**
 * pal - sdsdsds
 * @s: sdsdsds
 * @len: dsdsdsds
 * @i: dfqdsfq
 * Return: fdfdfdfdf
 */
int pal(char *s, int len, int i)
{
	if (s[i] == s[len - i] && i == len / 2)
	{
		return (1);
	}
	else if (s[i] == s[len - i])
	{
		return (pal(s, len, i + 1));
	}
	else
		return (0);
}
