#include "variadic_functions.h"

/**
 * print_strings - check the code for Holberton School students.
 *@separator: separate strings
 *@n: number of passed args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ch;
	va_list cha;

	va_start(cha, n);
	for (i = 0; i < n; i++)
	{

		ch = va_arg(cha, char *);
		printf("%s", ch != NULL ? ch : "(nil)");

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(cha);
}
