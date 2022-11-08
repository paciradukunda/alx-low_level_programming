#include "main.h"
/**
  * str_concat - allocates memory and stores two stirngs
  *
  * @s1: pointer to first string
  * @s2: pointer to second string
  *
  * Return: pointer to concantanated string
  */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int ln, i;

	ln = 0;
	for (i = 0; *s1 != '\0'; s1++)
		++ln;

	for (i = 0; *s2 != '\0'; s2++)
		++ln;

	new = malloc(++ln * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; *s2 != '\0'; s1++)
	{
		for (
	}

}
