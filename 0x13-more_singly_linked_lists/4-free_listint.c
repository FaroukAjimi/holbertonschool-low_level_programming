#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - check the code for Holberton School students.
 *@head: kfoo
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *p = NULL;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
