#include <stdio.h>
#include "lists.h"
/**
 *print_list - printer
 *@h: oootl
 *Return: ppo
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)", 0);
			h = h->next;
			i++;
			printf("\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
		}
	}
	return (i);
}
