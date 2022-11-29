#include "lists.h"
/**
 * add_nodeint_end - adds node at tail
 *
 * @head: pointer to pointer head
 * @n: data
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if(new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new
		new->n = n;
		new->next = NULL;
		return (*head);
	}
	else
	{
		while ((*head) != NULL)
		{
			if ((*head)->next == NULL)
			{
				new->n = n;
				new->next = NULL;
				head = new;
				return (*head);
			}
			*head = (*head)->next;
		}
	}
}
