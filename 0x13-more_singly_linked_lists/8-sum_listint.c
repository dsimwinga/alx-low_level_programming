#include "lists.h"

/**
 * sum_listint - my main function
 * @head: pointer to the first node
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
