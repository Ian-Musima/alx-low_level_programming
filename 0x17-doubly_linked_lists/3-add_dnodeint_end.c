#include "lists.h"

/**
 *add_dnodeint_end - add node at the end of a dlistint_t list
 *@head:pointer to the head
 *@n:integer to be added
 *
 *Return:the address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new-. = NULL;
		*head = new_node;
		return (new_node)
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node-> = last;

	return (new_node);

}
