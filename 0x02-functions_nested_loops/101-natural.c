#include "main.c"
/**
  * main - calculates the sum of multiples of 3 or 5 among all numbers bellow 1024
  *
  * Return: the summ
  */

int main(void)
{
	int sum, count;

	sum = 0;

	for (count = 0; count < 1024; ++count)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
			sum += count;
		else
			continue;
	}
	printf("%d\n", sum);

	return (0);
}
