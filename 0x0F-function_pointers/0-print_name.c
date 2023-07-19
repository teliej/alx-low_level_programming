/**
 * print_name - function to print name
 *
 * @name: name to print
 * @f: function pointer that returns nothing
 *
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
