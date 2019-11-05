#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - check the code for Holberton School students.
 *@head: pppk
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int i = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		i++;
		head = head->next;
	}
	return (sum);
}
