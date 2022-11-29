#include "lists.h"
/**
 * add_nodeint - adds node at head
 *
 * @head: pointer to pointer head
 * @n: data
 * Return: listint_t*
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));
	listint_t *new = malloc(sizeof(listint_t));

	tmp = *head;

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
