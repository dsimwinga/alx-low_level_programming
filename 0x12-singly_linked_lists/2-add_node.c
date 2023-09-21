#include "lists.h"

/**
 *list_t *add_node - my main structure
 *@head: head to the linked list
 *@str: the address
 *Return:  a pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newElement;
	unsigned int i, count = 0;

	newElement = malloc(sizeof(list_t));
	if (newElement == NULL)
		return (NULL);
	newElement->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newElement->len = count;
	newElement->next = *head;
	*head = newElement;

	return (*head);

}
