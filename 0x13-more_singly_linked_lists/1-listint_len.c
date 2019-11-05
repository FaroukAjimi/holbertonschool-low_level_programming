#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check the code for Holberton School students.
 *@h: gill
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
