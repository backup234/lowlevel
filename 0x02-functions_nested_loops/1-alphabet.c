#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: void.
 */

void print_alphabet(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
