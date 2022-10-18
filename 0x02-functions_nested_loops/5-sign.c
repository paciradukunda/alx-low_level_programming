#include "main.h"
/**
 * print_sign: - checks sign of a number
 *
 * @n: integer
 *
 * Return: 1 if positive, 0 if zero, -1 if bellow zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(48);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(43);
		return (1);
	}
	_putchar('\n');

}
