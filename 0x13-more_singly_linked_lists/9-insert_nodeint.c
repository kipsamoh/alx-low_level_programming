#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given position
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: new node address.else null if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *newnode;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && h != NULL; x++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = h->next;
		h->next = newnode;
	}

	return (newnode);
}
