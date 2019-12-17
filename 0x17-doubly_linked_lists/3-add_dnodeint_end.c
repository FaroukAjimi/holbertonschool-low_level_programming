#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t **tracer = head, *new;

	new = malloc(sizeof(dlistint_t));
	if(!new)
		return(0);
	while (*tracer)
		tracer = &(*tracer)->next;
	new->n = n;
	new->next = *tracer;
	new->prev = ;
	*tracer = new;
	return (new);
}
