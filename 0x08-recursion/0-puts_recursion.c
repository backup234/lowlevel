#include "holberton.h"
#include <stdio.h>
/**
 * _puts_recursion - a function to prinit a string
 *@s:pointer to a string to printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
