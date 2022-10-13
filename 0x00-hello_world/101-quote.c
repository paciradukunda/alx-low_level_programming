#include<stdio.h>
#include<unistd.h>
/**
  * The following program only prints
  * and that piece of art is useful" - Dora Korpar, 2015-10-19
*/
int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, string, sizeof(string));
	return (1);
}
