#include "main.h"
/**
  * main - prints number of passed parameters
  * @argc: size of array
  * @argv: array of parameters
  *
  * Return: 0 if succefull
  */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
