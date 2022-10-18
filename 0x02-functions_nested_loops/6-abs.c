#include "main.c"

/**
  * _abs - return absolute value of int
  *
  * @i: integer number
  *
  * return: computed int
  */

 int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
