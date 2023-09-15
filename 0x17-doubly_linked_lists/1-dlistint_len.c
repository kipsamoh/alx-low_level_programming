#include "lists.h"

/**
 * dlistint_len - returns the number of eleme_nts in
 * a double linked list
 *
 * @h: head of the list_
 * Return: the number of_ nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int sum;

	sum = 0;

	if (h == NULL)
		return (sum);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}

	return (sum);
}
