#include "list.h"
#include <stdio.h>

/**
 * list_len - function find the length of a list
 * @h: the node head
 * Return: the length of the node
 */

size_t list_len(const list_t *h);
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		h = h->next;
	}
	return (len);
}
