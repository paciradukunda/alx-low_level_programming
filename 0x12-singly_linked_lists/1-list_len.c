#include "main.h"
/**
  * list - function displays length of list
  *
  * @h: the head of linked list
  * Return: nodes number
  */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
