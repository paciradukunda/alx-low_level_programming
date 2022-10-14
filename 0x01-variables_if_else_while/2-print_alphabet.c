#include <stdio.h>

/* The following function prints alphabets in lower case*/

int main(void)
{
		char alpbet[] = "abcdefghijklmnopqrstuvwxyz";

		for (int i = 0; i < (sizeof(alpbet)-2); i++)
			putchar(alpbet[i]);
		return (0);
}

