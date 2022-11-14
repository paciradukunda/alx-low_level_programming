#include <stdio.h>
#include "dog.h"
/**
  * print_dog - print the given dog structure
  *
  * @d: pointer to structure
  *
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
        d -> name != NULL ? printf("%s\n", d -> name) : printf("(nil)\n");
	printf("Age: ");
	d -> age != NULL ? printf("%f\n", d -> name) : printf("(nil)\n");
	printf("Owner: ");
	d -> owner != NULL ? printf("%s\n", d -> owner) : printf("(nil)\n");
}
