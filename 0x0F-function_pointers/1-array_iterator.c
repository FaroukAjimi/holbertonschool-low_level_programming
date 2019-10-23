#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - execute
 *@array: array
 *@size: size
 *@action: Function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
