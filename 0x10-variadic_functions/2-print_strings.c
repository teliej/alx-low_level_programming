#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings then a new line
 *
 * @separator: pointer to a constant separator
 * @n: start of arg parameters
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int index;
	char *str;

	va_start(i, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(i, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && index != n - 1)
			printf("%s", separator);
	}
	va_end(i);
	printf("\n");
}
