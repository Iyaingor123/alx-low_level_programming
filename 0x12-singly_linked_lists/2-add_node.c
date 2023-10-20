#include "lists.h"
#include <stdio.h>

/**
 * add_node - add new node at the beginning
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: the address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t len;

	while (*head)

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (len = 0; str[len]; len++)

	newnode->len = len;
	newnode->next = *head;
	*head =  newnode;

	return (*head);
}

