#include "main.h"
/**
  * create_array - creates an array of specifified size and initializes it with
  * specified character
  * @size: size of the array
  * @c: character to initialize
  *
  * Return: return the initialized character
  */

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
