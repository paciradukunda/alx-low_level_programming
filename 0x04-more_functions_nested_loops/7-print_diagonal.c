#include "main.h"

/**
  * print_diagonal - prints diagonal of length n
  *
  * @n - integer input
  *
  * Return: void
  */

void print_diagonal(int n)
{
	int i;

	if (n != 0 && n !< 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
