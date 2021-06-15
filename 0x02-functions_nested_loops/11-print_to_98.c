#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - check the code for Holberton School students.
 *
 * @n: value 1
 * Return: void.
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
