#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - HOOLI
 *@name: name
 *@f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
