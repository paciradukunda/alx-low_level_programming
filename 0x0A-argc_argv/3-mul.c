#include "main.h"
/**
  * main - multiplyies two numbers
  * @argc: size of array
  * @argv: arry of parameters
  *
  * Return: 0 if succefull
  */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
}
