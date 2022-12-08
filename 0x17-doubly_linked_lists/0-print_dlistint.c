#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 *print_dlistint - print all elements of a dlistint_t list
 *@h:doubly linked list
 *
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	const dlistint_t *p = h;

	while (p != NULL)
	{
		i++;
		printf("%d\n", (*p).n);
		p = (*p).next;
	}
	return (i);
}
