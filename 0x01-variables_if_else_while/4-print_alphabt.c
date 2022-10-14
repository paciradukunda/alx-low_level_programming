#include <stdio.h>

/* The following function prints alphabets in lower case except q and e */

int main(void)
{
	for (int i = 97; i < 123; i++)
	{
		if ( i == 101 || i == 113)
			continue;
		else
			putchar(i);
	}
	return (0);
		
	
}
