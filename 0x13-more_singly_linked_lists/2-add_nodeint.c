#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: address of the first node.
 * @n: the value of data in a node
 * Return: the address of the new element, or NULL if it failed
 * Description: function to add a singly linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_first_node;

	new_first_node = (listint_t *) malloc(sizeof(listint_t));
	if (head == NULL)
	{
		return (NULL);
	}
	else
		new_first_node->n = n;
	new_first_node->next = *head;
	*head = new_first_node;
		return (new_first_node);
}
