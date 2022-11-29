#include "lists.h"
/**
 * free_listint - deletes list
 *
 * @head: pointer to head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
