#include "main.h"

/**
  * print_triangle - prints triangle of length size
  *
  * @size - integer input
  *
  * Return: void
  */

void print_triangle(int size)
{
	int i, x, z;

	if (size != 0 && size !< 0)
	{
		for (z = 0; z <= size; z++)
		{
			for (i = size - 1; i >= 0; i--)
			{
				_putchar('\b');
			}
			for (x = 1; x <= size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
