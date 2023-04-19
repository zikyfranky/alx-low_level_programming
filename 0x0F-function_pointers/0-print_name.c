/**
 * print_name - Prints the name variable
 * @name: the name to print
 * @f: A function pointer to call and pass @name to
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
