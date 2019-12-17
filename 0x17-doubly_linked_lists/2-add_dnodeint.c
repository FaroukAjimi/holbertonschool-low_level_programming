#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *k = malloc(sizeof(dlistint_t));
	dlistint_t *t = malloc(sizeof(dlistint_t));

	if (k == NULL)
		return (NULL);
	k->n = n;
	k->prev = NULL;
	k->next = NULL;
	if (*head == NULL)
	{
		k->next = NULL;
		*head = k;
		return (*head);
	}
	t = *head;
	k->next = t;
	t->prev = k;
	*head = k;
	return (k);
}
