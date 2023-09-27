#include "lists.h"

/**
 * reverse_listint - my main function
 * @head: pointer to the first node
 *Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *rea;

	if (head == NULL || *head == NULL)
		return (NULL);

	rea = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = rea;
		rea = *head;
		*head = front;
	}
	(*head)->next = rea;
	return (*head);
}
