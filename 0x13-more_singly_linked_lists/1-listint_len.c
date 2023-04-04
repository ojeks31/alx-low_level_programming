#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: contains address of first node
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t incremental = 0;

	while (h != NULL)
	{

		incremental++;
		h = h->next;
	}
	return (incremental);
}
