#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 *
 *@size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 1; row <= size; row++)
	{
		for (col = row; col <= size; col++)
		{
			if (col < size)
			{
				_putchar(' ');
			}
		}
		for (col = 1; col <= row; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
