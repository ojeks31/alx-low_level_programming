#include "lists.h"
/**
 * free_listint2.c - frees a listint_t list
 * @head: contains the address of the first node
 * Return: Always 0
 * Description: singly linked list that fress a list
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	if ((*head) == Null)
		return;

	while ((*head) != NULL)
	{
		last = (*head);
		(*head) = NULL;
		free(last);
	}
}
