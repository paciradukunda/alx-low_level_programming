#include "main.h"
/**
  * main - prints first 50 fibonacci numbers
  *
  * Retun: 0 if succefull
  */
int main(void)
{
	int count, temp;

	temp = 0;

	for (count = 1; count < 50;count++)
	{
	       printf("%d,",count + temp);
	       temp = count;
	}
	return (0);
}
