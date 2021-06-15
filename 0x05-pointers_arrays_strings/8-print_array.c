#include <stdio.h>
#include "holberton.h"
/**
 * print_array - check the code for Holberton School students.
 *
 *@a: value one
 *@n: value two
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; ++i)
	{
		if (a[i] == a[0])
			printf("%d, ", a[i]);
		else if (a[i] == a[1])
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
