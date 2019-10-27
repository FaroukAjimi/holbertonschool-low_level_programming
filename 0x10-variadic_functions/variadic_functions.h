#ifndef VARI
#define VARI
#include <stdarg.h>
/**
 *struct typ - suct
 *@s: ttp
 *@p:dgogoke
 *
 */
typedef struct typ
{
	char *s;
	void (*p)(va_list);
} t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
