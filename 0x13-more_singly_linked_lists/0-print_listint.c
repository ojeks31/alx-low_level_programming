#include "lists.h"

/**
 *  print_listint - prints all the elements of a listint_t list.
 *  @h: contains address of first node.
 *  Return: Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t increament = 0;

	if (h == NULL)
		printf("it is an empty address");
	while (h != NULL)
	{
		printf("%d\n", h->n);
		increament++;
		h = h->next;
	}

	return (increament);
}
