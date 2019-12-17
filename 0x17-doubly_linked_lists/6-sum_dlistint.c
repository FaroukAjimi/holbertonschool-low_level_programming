#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - check the code for Holberton School students.
 *@head: lfs
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
