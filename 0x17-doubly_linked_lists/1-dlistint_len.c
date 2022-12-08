#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 *dlistint_len - print all elements of a dlistint_t list
 *@h:doubly linked list
 *
 *Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	const dlistint_t *p = h;

	while (p != NULL)
	{
		i++;
		p = (*p).next;
	}
	return (i);
}
