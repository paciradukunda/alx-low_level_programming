#include "main.h"
/**
  * print_list - function displays the data in linked list and the number of nodes.
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
		if (h->str == NULL)
			printf("[0] (nil)");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
