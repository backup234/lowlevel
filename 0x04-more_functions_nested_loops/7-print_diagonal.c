#include <stdio.h>
#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 *
 *@n: vlaue of the fun
 * Return: void.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= n; b++)
		{
			if (b < a)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
