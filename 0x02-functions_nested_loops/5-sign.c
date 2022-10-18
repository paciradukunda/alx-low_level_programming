#include "main.h"
/**
  * print_sign: - checks sign of a number
  * 
  * Return: 1 if positive, 0 if zero, -1 if bellow zero
  */
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (1);
}
