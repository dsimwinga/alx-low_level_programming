#include "lists.h"

/**
 * add_nodeint - my main functio
 * @head: head to the pointer of the first node
 * @n: adding a new node
 * Return: a new element or a NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
