#include "main.h"

/**
 * _islower - checks if character is lower
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if lowercase 0 other wise
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}
