#include <stdio.h>
#include "holberton.h"
/**
 * _puts - prints the string
 *
 *@str: string pointer
 * Return: Always 0.
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] > 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
