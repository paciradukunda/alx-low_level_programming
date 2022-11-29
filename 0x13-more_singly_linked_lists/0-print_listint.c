#include "lists.h"
/**
 * print_listint - prints all nodes
 *
 * @h: head of linked list
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("\n");
	return (count);
}
