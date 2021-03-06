#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - a + ...
 *@n: number
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
	else
		va_end(ap);
	return (sum);
}
