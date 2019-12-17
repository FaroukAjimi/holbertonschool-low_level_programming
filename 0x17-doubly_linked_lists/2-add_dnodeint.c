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

	k = malloc(sizeof(*k));
	if (k)
	{
		k->n = n;
		k->next = *head;
		k->prev = NULL;
		*head = k;
	}
	return (k);
}
