#include "main.h"

/**
  * print_line - prints line of length n
  *
  * @n: integer input
  *
  * Return: void
  */

void print_line(int n)
{
	int i;

	if (n != 0 && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
