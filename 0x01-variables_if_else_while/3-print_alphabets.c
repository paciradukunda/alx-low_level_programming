#include <stdio.h>

/** The following function prints alphabets in lower case
 *  then into uppercase
 */

int main(void)
{
	for (int i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (int i = 65; i < 91; i++)
	{
		putchar(i);
	}
	return (0);
		
	
}
