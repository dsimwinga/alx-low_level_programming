#include "lists.h"

/**
 *list_t *add_node_end - my main function
 *@head: head pointer to the linked list
 *@str: address to the nodes
 *Return: a  head pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newelement, *n;
	unsigned int i, count = 0;

	newelement = malloc(sizeof(list_t));
	if (newelement == NULL)
		return (NULL);
	newelement->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newelement->len = count;
	newelement->next = NULL;
	n = *head;

	if (n == NULL)
		*head = newelement;
	else
	{
		while (n->next != NULL)
			n = n->next;
		n->next = newelement;
	}
	return (*head);

}
