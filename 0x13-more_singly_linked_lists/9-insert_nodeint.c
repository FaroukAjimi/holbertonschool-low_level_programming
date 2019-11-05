#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 *@head: opp
 *@idx: al
 *@n: ech
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i = 0;
	listint_t *p;

	if (head == NULL)
		return (NULL);
	p = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (p && i < idx - 1)
	{
		i++;
		p = p->next;
		if (p == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = p->next;
	p->next = new;
	return (new);
}
