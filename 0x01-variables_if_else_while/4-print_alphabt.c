#include <stdio.h>

/* The following function prints alphabets in lower case except q and e */

int main(void)
{
	int i;
	for ( i = 97; i < 123; i++)
	{
		if ( i == 101 || i == 113)
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
		
	
}
