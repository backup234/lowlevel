#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - check the code for Holberton School students.
 *
 *@c: int value
 * Return: Always 0.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
