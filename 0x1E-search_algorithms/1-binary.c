#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Entry point
 * @size: size of array
 * @value: value to search for
 * @array: array to search in
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
size_t i, start, end, checkpoint;

if (array == NULL)
{
return (-1);
}
start = 0;
end = size - 1;
while (start <= end)
{
checkpoint = (end + start) / 2;
printf("Searching in array: ");
for (i = start; i < end; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);
if (array[checkpoint] == value)
return (checkpoint);
else if (array[checkpoint] > value)
end = checkpoint - 1;
else if (array[checkpoint] < value)
start = checkpoint + 1;
}
return (-1);
}
