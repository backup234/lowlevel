#include <stdio.h>
#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 *
 *@str: pointer
 * Return: void
 */
void puts2(char *str)
{
	int i;

	while (str[i] > 0)
	{
		if (i != 1 && i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
