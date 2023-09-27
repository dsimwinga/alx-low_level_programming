#include "lists.h"

/**
*print_listint - my main function
@h: header to the pointer
*Return: returns a pointer
 */
size_t print_listint(const listint_t *h)
{
	size_t argu = 0;

	while (h)
	{
		argu++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (argu);
}
