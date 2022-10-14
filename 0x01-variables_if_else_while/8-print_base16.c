#include <stdio.h>

/* The following program prints numbers from 0 to 16 in base 16 */

int main(void)
{
	int i;
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
