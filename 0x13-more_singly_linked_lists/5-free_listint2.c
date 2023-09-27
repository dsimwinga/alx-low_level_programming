#include "lists.h"

/**
 * free_listint2 - my main function
 * @head: a pointer head to the first  node
 */
void free_listint2(listint_t **head)
{
	listint_t *argu;

	if (head == NULL)
		return;

	while (*head)
	{
		argu = (*head)->next;
		free(*head);
		*head = argu;
	}
	head = NULL;
}
