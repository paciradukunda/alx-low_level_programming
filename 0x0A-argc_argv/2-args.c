#include "main.h"
/**
  * main - prints all passed parameters
  * @argc: size of array
  * @argv: arry of parameters
  *
  * RETURN: 0 if succefull
  */

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
		printf("%s", argv[i]);

	return (0);
}
