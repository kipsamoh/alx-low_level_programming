#include "lists.h"
/**
 * add_node - adds new node at the start of list_t
 * @head: head of the linked list.
 * @str: string to add
 * Return: list_t head address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t numofchars;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (numchars = 0; str[numchars]; numchars++)
		;

	newnode->len = numchars;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
