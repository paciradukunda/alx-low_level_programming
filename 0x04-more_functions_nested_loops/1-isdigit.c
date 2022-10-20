/**
  * _isdigit - checks if charchter is a number
  *
  * @c: integer input
  *
  * Return: 1 if digit 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
