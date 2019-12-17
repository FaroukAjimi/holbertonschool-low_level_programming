#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code for Holberton School students.
 *@head: fdfdf
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *k;
	while (head)
	{
		k = head->next;
		free(head);
		head = k;
	}
}
