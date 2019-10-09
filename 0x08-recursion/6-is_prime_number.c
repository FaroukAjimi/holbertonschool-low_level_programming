#include "holberton.h"
/**
 *primo - check the code for Holberton School students.
 *@i: fkdhfjkdjfd
 *@n: fdfdfdf
 * Return: Always 0.
 */
int primo(int i, int n)
{
	if (n <= 1)
		return (0);
	else if (i >= n)
		return (1);
	if (n % i != 0 && i != n)
		return (primo(i + 1, n));
	else
		return (0);
}
/**
 *is_prime_number - fdfjkdfhj
 *@n: fdkfjdkfd
 *Return: fdjfkdjfkd
 */
int is_prime_number(int n)
{
	return (primo(2, n));
}
