#include "lists.h"
/**
 *list_len - hoohle
 *@h: hoooh
 *Return: gioi
 *
 */
size_t list_len(const list_t *h)
{
unsigned int i = 0;

if (h == NULL)
return (0);
while (h != NULL)
{
if (h->str == NULL)
{
h = h->next;
i++;
}
else
{
h = h->next;
i++;
}
}
return (i);
}
