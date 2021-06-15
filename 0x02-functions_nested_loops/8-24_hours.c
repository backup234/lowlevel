#include <stdio.h>
#include "holberton.h"
/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c < '6')
			{
				d = '0';
				while (d <= '9')
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
			if (a == '2' && b == '4')
			{
				break;
			}
		}
		a++;
		if (a == '3')
		{
			break;
		}
	}
}
