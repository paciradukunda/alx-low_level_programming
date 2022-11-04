#include <stdio.h>
/**
  * main - multiplyies two numbers
  * @argc: size of array
  * @argv: arry of parameters
  *
  * RETURN: 0 if succefull
  */

int main(int argc, char *argv[])
{
	int product;

	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = argv[1] * argv[2];
		return (0);
	}
}
