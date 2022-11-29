#include "lists.h"
/**
 * print_listint - prints all nodes
 *
 * @h: head of linked list
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
