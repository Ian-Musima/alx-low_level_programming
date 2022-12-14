#include "lists.h"

/**
 *add_dnodeint - add node at the beginning of a dlistint_t list
 *@head:pointer to the head
 *@n:integer to be added
 *
 *Return:the address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;
	return (new_node);

}
