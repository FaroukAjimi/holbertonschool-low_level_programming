#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - check the code for Holberton School students.
 *@head: h
 *@n: gg
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *k = malloc(sizeof(dlistint_t));
	dlistint_t *t = *head;

	if (k == NULL)
		return (NULL);
	k->n = n;
	k->prev = NULL;
	k->next = NULL;
	if (*head == NULL)
	{
		*head = k;
		return (*head);
	}
	while (t->next != NULL)
	{
		t = t->next;
	}
	k->prev = t;
	t->next = k;
	return (k);
}
