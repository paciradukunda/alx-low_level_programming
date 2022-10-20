#include "main.h"

/**
  * main - in range 1 to 100 print fizz if number is multiple of three
  * and buzz for multiple of five
  *
  * Return: 0 if succefull
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz\b");
		else if (i % 5 == 0)
			printf("Buzz\b");
		else
			printf("%d\b",i)
	}
	return (0);
}
