#include "lists.h"

/**
 * insert_nodeint_at_index - my main function
 * @head: pointer head to the first node
 * @idx: to the pointer
 * @n: integer to the pointer
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *c = *head;
	unsigned int argus;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = c;
		*head = newNode;
		return (newNode);
	}

	for (argus = 0; argus < (idx - 1); argus++)
	{
		if (c == NULL || c->next == NULL)
			return (NULL);

		c = c->next;
	}
	newNode->next = c->next;
	c->next = newNode;
	return (newNode);
}
