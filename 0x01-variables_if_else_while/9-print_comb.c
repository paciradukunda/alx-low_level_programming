#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 57)
	       	{
			putchar(i);
			break;
		}
		putchar(i);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
