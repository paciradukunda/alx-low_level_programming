#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - free the given memory of structure dog
  *
  * @d: pointer to structure dog
  *
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
