#include "dog.h"
/**
  * init_dog - intialize a dog data type with values
  *
  * @d: pointer to the structure
  * @name: name of the dog
  * @age: age of the dog
  * @owner: name of owner
  *
  * Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
