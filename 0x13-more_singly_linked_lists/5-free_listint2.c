#include "lists.h"
/**
 * free_listint2 - deletes list
 *
 * @head: pointer to head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;
	int count = 0;

	while (*head != NULL)
	{
		prev = *head;
		*head = (*head)->next;
		if (count == 0)
			continue;
		count++;
		free(prev);
	}
}
