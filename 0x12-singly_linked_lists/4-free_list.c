#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function free a linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
list_t *head;

while (head)
{
	head = head->next;
	free(head->str);
	free(head);
	head = head;
}
}
