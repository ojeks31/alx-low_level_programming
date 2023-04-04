#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: contains the address of first node
 * Return: Always 0
 * Description: function that frees a linked list
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last);
	}
}
