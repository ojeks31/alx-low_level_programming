#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: contain the address of the first node
 * @n: contain the value of the data
 * Return: the address of the new element, or NULL if it failed
 * Description: a linked list that add a node at the end of a list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_last_node;
	listint_t *last = (*head);

	new_last_node = (listint_t *) malloc(sizeof(listint_t));
	if (!new_last_node)
		return (NULL);

	new_last_node->n = n;
	new_last_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_last_node;
			return (new_last_node);
	}

			while (last->next != NULL)

				last = last->next;

			last->next = new_last_node;
			return (new_last_node);
}
