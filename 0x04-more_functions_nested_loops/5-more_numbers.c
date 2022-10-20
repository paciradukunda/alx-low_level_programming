#include "main.h"

/**
  * more_numbers - prints 0 to 14 1o times
  *
  * Return: void
  */

void print_numbers(void)
{
	int i, x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar("%d",x);
		}
		_putchar('\n');
	}
}
