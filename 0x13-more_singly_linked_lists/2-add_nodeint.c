#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of the list
 * @head: head of a list.
 * @n: element n
 *
 * Return: address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
