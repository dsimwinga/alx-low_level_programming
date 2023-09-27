#include "lists.h"

/**
 * delete_nodeint_at_index - my main function
 * @head: to the pointer to the first node
 * @index: to the pointer
 * Return: -1 at success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *d, *c = *head;
	unsigned int argus;

	if (c == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	for (argus = 0; argus < (index - 1); argus++)
	{
		if (c->next == NULL)
			return (-1);

		c = c->next;
	}
	d = c->next;
	c->next = d->next;
	free(d);
	return (1);
}
