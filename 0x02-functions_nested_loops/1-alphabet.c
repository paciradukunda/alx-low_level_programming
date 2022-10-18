#include "main.h"

/**
  * print_alphabet - print all alphabet in lowercase
  *
  * return: void(no return)
  */

void print_alphabet(void)
{
	int count;

	for (count = 97; count < 123; count++)
		_putchar(count);
	_putchar('\n');

}
