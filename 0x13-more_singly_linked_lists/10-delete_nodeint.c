#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - opp
 * @head: lop
 * @index: llfll
 * Return: Always 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p, *h;

	p = *head;
	if (p != NULL && index == 0)
	{
		*head = p->next;
		free(p);
		return (1);
	}
	while (p != NULL)
	{
		if (i == index)
		{
			h->next = p->next;
			free(p);
			return (1);
		}
		h = p;
		p = p->next;
		i++;
	}
	return (-1);
}
