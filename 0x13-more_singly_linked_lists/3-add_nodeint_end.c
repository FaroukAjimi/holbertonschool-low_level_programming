#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code for Holberton School students.
 *@head: ooo
 *@n: fkkk
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t **tracer = head, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	while (*tracer)
	{
		tracer = &(*tracer)->next;
	}
	new->n = n;
	new->next = *tracer;
	*tracer = new;
	return (new);
}
