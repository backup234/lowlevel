#include "holberton.h"
/**
 * puts_half - pirnt second half of the string
 * @str: string
 * Retrun: Nothing
 */
void puts_half(char *str)
{
	int index, len;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (len % 2 == 0)
	{
		for (index = len / 2; index < len; index++)
		{
			_putchar(str[index]);
		}
	}
	else
	{
		for (index = ((len - 1) / 2) + 1; index < len; index++)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}
