#include "main.h"
/**
  * print_alphabet_x10 - prints lowercase alphabet 10 times.
  *
  * return: no return value
  */

void print_alphabet_x10(void)
{
	int i, x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 97; x < 123; x++)
			_putchar(x);
		_putchar('\n');
	}
}
