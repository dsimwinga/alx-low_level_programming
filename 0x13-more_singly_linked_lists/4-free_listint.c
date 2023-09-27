#include "lists.h"

/**
 * free_listint - my main function
 * @head: head to the pointer
 */
void free_listint(listint_t *head)
{
	listint_t *argu;

	while (head)
	{
		argu = head->next;
		free(head);
		head = argu;
	}
}
