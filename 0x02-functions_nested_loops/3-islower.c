#include <stdio.h>
#include <ctype.h>
#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 *@c: charachter
 *
 * Return: (int c)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
