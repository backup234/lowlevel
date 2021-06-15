#include "holberton.h"
/**
 * print_line - print _ n times
 * @n: number of times to print _
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
