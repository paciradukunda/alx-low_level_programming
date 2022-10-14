#include <stdio.h>

/** The following function prints alphabets in lower case
 *  then into uppercase
 */

int main(void)
{
	int i;
	for ( i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for ( i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
		
	
}
