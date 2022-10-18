#include "main.h"
/**
  * times_table - prints 9 times tables
  *
  * Return: 0 if successfull
  */

void times_table(void)
{
	int i, x, prdct;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (x = 0; x < 10; x++)
		{
			_putchar(',');
			_putchar(' ');

			prdct = i * x;

			if (prdct <= 9)
				_putchar(' ');
			else
				_putchar((prdct / 10) + 48);
			_putchar((prdct % 10) + 48);
		}
		_putchar('\n');
	}
}
