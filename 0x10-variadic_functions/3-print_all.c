#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_i - integer
 *@i: gooogle
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 *print_c - char
 *@c: ap
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 *print_f - float
 *@f: ap
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 *print_s - string
 *@s: ap
 */
void print_s(va_list s)
{
	char *p = va_arg(s, char *);

	if (p != NULL)
	{
		printf("%s", p);
		return;
	}
	printf("(nil)");
}
/**
 *print_all - all fun
 *@format: fooo fighters
 */
void print_all(const char * const format, ...)
{
	t array[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	unsigned int i = 0;
	unsigned int j = 0;
	void (*func)(va_list);
	va_list ap;
	char *separator = "";

	va_start(ap, format);
	while (format != NULL && format[i] != 0)
	{
		j = 0;
		while (array[j].s != NULL)
		{
			if (array[j].s[0] == format[i])
			{
				printf("%s", separator);
				func = array[j].p;
				func(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
va_end(ap);
printf("\n");
}
