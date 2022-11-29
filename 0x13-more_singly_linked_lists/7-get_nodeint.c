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
	int count = 0;
	listint_t *prev;

	while (count != index)
	{
		count += 1;
		if (count < index && head == NULL)
			return (NULL);
		prev = head;
		head = head->next;
	}
	return (prev);
}
