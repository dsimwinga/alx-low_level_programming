#include "lists.h"

/**
 * pop_listint - my main function
 * @head: a head to the ointer for the first node
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *argu;
	int arg;

	if (*head == NULL)
		return (0);

	argu = *head;
	arg = (*head)->n;
	*head = (*head)->next;

	free(argu);

return (arg);
}
