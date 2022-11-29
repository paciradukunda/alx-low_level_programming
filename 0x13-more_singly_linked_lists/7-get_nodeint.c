#include "lists.h"
/**
 * get_nodeint_at_index - Get the nodeint at index object
 *
 * @head: pointer to head
 * @index: index
 * Return: listint_t*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
