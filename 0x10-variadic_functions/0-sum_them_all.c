#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: number of args to pass
 * Return: result of the sum (sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list lis;

	va_start(lis, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lis, int);
	}
	va_end(lis);
	return (sum);
}
