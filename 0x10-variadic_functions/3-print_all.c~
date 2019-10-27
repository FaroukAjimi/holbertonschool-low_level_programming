#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_all - all fun
 *@format: fooo fighters
 */
void print_all(const char * const format, ...)
{
	t array[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", printf_f},
		{"s", print_s},
		{NULL, NULL}
	};
	unsigned int i = 0;
	unsigned int j = 0;
	void (*func)(va_list);
	va_list ap;
	char *separator = "";

	va_start(ap, format);
	while (format != NULL && format[i] != NULL)
	{
		j = 0;
		while (array[j].s != NULL)
		{
			if (array[j].s[0] == format[i])
			{
				printf("%s", separator);
				func = array[j].p;
				func(list);
				separator = ", ";
			}
			j++;
		}
	        i++;
	}
}
va_end(list);
printf("\n");
}
/**
 *print_c - char
 *@c: ap
 */
void print_c(va_list c)
{
	printf("%d", va_arg(i, int));
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
