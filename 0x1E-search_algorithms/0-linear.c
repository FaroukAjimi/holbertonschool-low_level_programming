#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Entry point
 * @array: array of integer that would be searched
 * @size: size of array
 * @value: the value to search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
