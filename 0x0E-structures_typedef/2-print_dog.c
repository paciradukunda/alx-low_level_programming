#include <stdio.h>
/**
  * print_dog - print the given dog structure
  *
  * @d: pointer to structure
  *
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (*d == 0)
		return;

	printf("Name: %s", d -> name);
	printf("Age: %f", d -> age);
	printf("Owner: %s", d -> owner);
}
