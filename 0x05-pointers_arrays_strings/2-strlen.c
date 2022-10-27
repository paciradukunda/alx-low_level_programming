/**
  * _strlen - return length of string
  *
  * @s: string array
  *
  * Return: size of string
  */
int _strlen(char *s)
{
	int ln;

	for (ln = 0; *s != '\0'; ++s)
		++ln;

	return (ln);
}
