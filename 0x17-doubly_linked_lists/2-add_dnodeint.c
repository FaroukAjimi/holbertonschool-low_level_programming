#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
zdlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *k = NULL;
	dlistint_t *l = NULL;
	*k = malloc(sizeof(dlistint_t));
	*t = malloc(sizeof(dlistint_t));
	if (k == NULL)
		return (NULL);
	k->n = n;
	k->prev = NULL;
	k->next = NULL;
	if (*head == NULL)
	{
		begin->next = NULL;
		*head = begin;
		return (*head);
	}
	t = *head;
	k->next = t;
	t->prev = k;
	*head = begin;
	return (begin);
}
