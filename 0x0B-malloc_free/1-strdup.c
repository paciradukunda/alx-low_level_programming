#include "main.h"
/**
  * _strdup - allocate memory and copies the given string to that memory
  *
  * @str: string to be copied
  *
  * Return: pointer to the new string
  */

char *_strdup(char *str)
{
	char *new;
	int ln;

	for (ln = 0; *str != '\0'; ++s)
		++ln;

	new = malloc((++ln) * sizeof(char));
	if (new == NULL)
		return (NULL);

	for (i = 0; *str != '\0'; str++)
		new[i] = str[i];

	return (new);
}
