#include "lists.h"
/**
 * listint_len - counts nodes
 *
 * @h: head of linked list
 * Return: size
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
