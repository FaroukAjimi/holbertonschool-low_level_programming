#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - check the code for Holberton School students.
 *@head: pop
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
}
