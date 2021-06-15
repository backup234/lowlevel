#include "holberton.h"
/**
 * print_times_table - time table of 15
 * @n: number of time to be included in the fun
 * Return: Nothing
 */
void space(int n);
void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if ((j <= n) && (result < 10))
				{
					if (j > 0)
						space(3);
					_putchar(result + '0');
				}
				if ((j <= n) && (result > 9 && result < 100))
				{
					if (j > 0)
						space(2);
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				if ((j <= n) && (result > 99 && result < 1000))
				{
					if (j > 0)
						space(1);
					_putchar(result / 100 + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar(result % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * space - print coma and space
 * @n: number of space to be printed
 * Return: Nothing
 */
void space(int n)
{
	int i;

	_putchar(',');
	for (i = 1; i <= n; i++)
		_putchar(' ');
}
