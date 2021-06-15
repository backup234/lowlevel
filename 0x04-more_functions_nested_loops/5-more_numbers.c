#include "holberton.h"
/**
 * more_numbers - print nums 0 - 4 (10 times)
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j, firstnum, lastnum;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				firstnum = j / 10;
				lastnum = j % 10;
			}
			else
				firstnum = j;
			if (j >= 0)
				_putchar(firstnum + '0');
			if (j > 9)
				_putchar(lastnum + '0');
		}
		_putchar('\n');
	}
}
