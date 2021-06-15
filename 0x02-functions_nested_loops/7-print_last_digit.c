#include "holberton.h"
/**
 * print_last_digit - fun that print last digit of a num
 * @i: the number
 * Return: the last digit of the number
 */
int print_last_digit(int i)
{
	if (i >= 0)
		i = i  % 10;
	else
		i = -(i % 10);

	_putchar(i + '0');
	return (i);
}
