/**
  * _isupper - checks if charchter is uppercase
  *
  * @c: integer input
  *
  * Return: 1 if uppercase 0 otherwise
  */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
