#include "main.h"
/**
  * _puts - prints a string
  *
  * @str: pointer to a string
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
