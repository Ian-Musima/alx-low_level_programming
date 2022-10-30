#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 *print_list - print singly linked list elements
 *@h:singly linked list
 *
 *Return:the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	const list_t *p = h;

	while (p != NULL)
	{
		i++;
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (*p).len, (*p).str);
		p = (*p).next;
	}
	return (i);
}
