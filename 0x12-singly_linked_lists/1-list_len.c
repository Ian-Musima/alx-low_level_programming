#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 *list_len - count number of elements in a linked list
 *@h:singly linked list
 *
 *Return:the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	const list_t *p = h;

	while (p != NULL)
	{
		i++;
		p = (*p).next;
	}
	return (i);
}
