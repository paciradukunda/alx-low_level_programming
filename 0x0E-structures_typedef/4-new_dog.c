#include <stdlib.h>
/**
  * new_dog - creates a dog data type with values
  *
  * @name: name of the dog
  * @age: age of the dog
  * @owner: name of owner
  *
  * Return: pointer to structure
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new -> name = name;
	new -> age = age;
	new -> owner = owner;

	return (new);
}
