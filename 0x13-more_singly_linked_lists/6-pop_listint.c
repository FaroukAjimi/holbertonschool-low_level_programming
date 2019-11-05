#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - check the code for Holberton School students.
 * @head: opp
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int nb = 0;

	if (head == NULL)
		return (0);
	if (*head != NULL)
	{
		nb = (*head)->n;
		p = *head;
		free(*head);
		(*head) = p->next;
	}
	return (nb);
}
