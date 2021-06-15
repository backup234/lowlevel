#include "holberton.h"
#include <stdio.h>
/**
 *  _print_rev_recursion - a function to reverse a string
 *@s: pointer to strng
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
