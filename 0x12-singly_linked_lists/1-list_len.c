#include "lists.h"

/**
 *list_len - my main structure
 *@h: pointer to the linked singly lists
 *Return: a pointer
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
