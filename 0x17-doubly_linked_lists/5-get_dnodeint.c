#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - check the code for Holberton School students.
 *@head: df
 *@index: fd
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *k = head;

	while (k != NULL)
	{
		if (index == i)
			return (k);
		k = k->next;
		i++;
	}
	return (NULL);
}
