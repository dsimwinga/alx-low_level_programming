#include "lists.h"

/**
 * listint_len - my main function
 * @h: head to the the first list of nodes
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t argu = 0;

	while (h != NULL)
	{
		h = h->next;
		argu++;
	}
	return (argu);
}
