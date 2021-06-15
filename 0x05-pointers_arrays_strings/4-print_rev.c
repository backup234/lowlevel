#include <stdio.h>
#include "holberton.h"
/**
 * print_rev - reverse and print the string
 *
 *@s: string pointer
 * Return: void.
 */
void print_rev(char *s)
{
	int len;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
