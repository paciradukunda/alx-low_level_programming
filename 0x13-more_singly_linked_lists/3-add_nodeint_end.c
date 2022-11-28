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
    listint_t* new = malloc(sizeof(listint_t));
    listint_t* prev;
    listint_t* tmp = *head;
    
    if(*head == NULL)
    {
        *head = malloc(sizeof(listint_t));
        (*head)->n = n;
        (*head)->next = NULL;
        return (*head);
    }
    else
    {
        while ((*head) != NULL)
        {
        prev = *head;
        *head = (*head)->next;
        }
    
        new->n = n;
        new->next = NULL;

        prev->next = new;
        return (tmp);
    }
    
}