#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h = head;
	if (head == NULL)
		return (NULL);
	while (i < index && h != NULL)
	{
		i++;
		h = h->next;
	}
	return (h);
}
