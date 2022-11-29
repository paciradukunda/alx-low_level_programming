#include "lists.h"
/**
 * listint_len - counts nodes
 *
 * @h: head of linked list
 * Return: size
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
