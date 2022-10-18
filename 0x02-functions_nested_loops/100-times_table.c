#include "main.h"
/**
  * times_table - prints 9 times tables
  *
  * @n: input
  *
  * Return: 0 if successfull
  */

void times_table(void)
{
	int i, x, prdct;

	if (n <=15 && n >= 0)
	{
		for (i = 0; i <= n; ++i)
		{
			_putchar(48);
			for (x = 0; x <= n; ++x)
			{
				_putchar(',');
				_putchar(' ');

				prdct = i * x;

			if (prdct <= 9)

				_putchar(' ');

			if (prdct <= 99)
				_putchar(' ');
			if (prdct >= 100)
			{
				_putchar((prdct / 100) + 48);
				_putchar((prdct / 10) % 10 + 48);
			}
			else if (prdct <= 99 && prdct >= 10)
				_putchar((prdct /10) + 48);
			_putchar((prod % 10) +48;
			}
			_putchar('\n');
		}
	}
}
