/**
  * swap_int - swap the values of two intgeres
  *
  * @a: pointer
  * @b: pointer
  */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
