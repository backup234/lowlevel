#include <stdio.h>
#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 *
 *@a: pointer a
 *@b: pointer b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
