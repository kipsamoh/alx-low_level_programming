#include "lists.h"
/**
 * list_len - prints the num of elements in singly linked list.
 * @h: singly linked list.
 * Return: num of elements
 */

size_t list_len(const list_t *h)
{
	size_t nelements;

	nelements = 0;
	while (h != NULL)
	{
		h = h->next;
		nelements++;
	}
	return (nelements);
}
