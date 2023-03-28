/**
 * swap_int - Takes two arguments and swap their values with pointers
 *
 * @a: Pointer to first argument
 * @b: Pointer to second argument
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
