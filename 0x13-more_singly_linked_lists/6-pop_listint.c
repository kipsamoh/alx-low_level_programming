#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: data of the head node
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *h;
	listint_t *currentnode;

	if (*head == NULL)
		return (0);

	currentnode = *head;

	headnode = currentnode->n;

	h = currentnode->next;

	free(currentnode);

	*head = h;

	return (headnode);
}
