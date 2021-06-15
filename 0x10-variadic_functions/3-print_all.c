#include "variadic_functions.h"

/**
 * print_all - give the output based on the given fotmat
 *@format: format to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list form;
	char *cha;
	unsigned int i = 0;

	va_start(form, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(form, int));
			break;
		case 'i':
			printf("%i", va_arg(form, int));
			break;
		case 'f':
			printf("%f", va_arg(form, double));
			break;
		case 's':
			cha = va_arg(form, char *);
			printf("%s", cha != NULL ? cha : "(nil)");
			break;
		default:
			continue;
		}
		if (format[i])
			printf(", ");

	}
	printf("\n");
	va_end(form);
}
