#include "lists.h"

/**
 * add_node_end - adds new node at end of list_t
 * @head: head of the linked list.
 * @str: string to store
 * Return: list_t head address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	size_t numchars;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (numchars = 0; str[numchars]; numchars++)
		;

	newnode->len = numchars;
	newnode->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}

	return (*head);
}
