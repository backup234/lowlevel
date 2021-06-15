#include "holberton.h"
#include <stdio.h>

/**
 * factorial - a function to find a factorial of n
 *@n: a number to find the factorial
 * Return: the factorail of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
