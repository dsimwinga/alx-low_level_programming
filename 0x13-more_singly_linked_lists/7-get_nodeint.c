#include "lists.h"

/**
 * get_nodeint_at_index - my main function
 * @head: head to the pointer of the first node
 * @index: starting at 0
 * Return: NULL if the list do not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nthNode;

	for (nthNode = 0; nthNode < index; nthNode++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
