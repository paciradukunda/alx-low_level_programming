#include "main.h"
/**
 * _isalpha - checks if input is alphabet either lowercase or uppercase
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if alphabet 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
	_putchar('\n');
}
