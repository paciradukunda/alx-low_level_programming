#include "main.c"
/**
  * print_to_98 - prints all natural nnumbers form n to 98
  *
  * Return: no return
  */

void print_to_98(int n)
{
	int count;
	
	for (count = n;count <= 98;count++)
	{
		if (count != 98)
			printf("%d,", count);
		else
			printf("%d", count);

	}
	for (count = n;count >= 98;count--)
	{
		if (count !=98)
			printf("%d,", count);
		else
			printf("%d", count);
	}
	printf("\n");
}
