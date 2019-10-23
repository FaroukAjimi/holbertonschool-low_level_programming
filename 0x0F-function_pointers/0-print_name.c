#include "function_pointers.h"
/**
 *print_name - HOOLI
 *@name: name
 *@f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return (0);
	f(name);
}
