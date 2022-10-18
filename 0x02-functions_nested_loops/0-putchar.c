#include "main.h"

/** main - prints _putchar
 *
 * return: 0 if succefull
 */

int main(void)
{
	int strg[] = {95,112,117,116,99,104,97,114};
	int size,i;

	size = sizeof(strg) / sizeof(int);

	for (i = 0;i < size;i++)
	{
		_putchar(strg[i]);
	}
	_putchar('\n');
	return (0);
}
