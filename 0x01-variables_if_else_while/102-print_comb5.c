#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if ((a != '9' || b != '9') || (c != '9' || d != '9'))
					{
						putchar(',');
						putchar(' ');
					}
					d++;

				}
				c++;
				d = '1';
			}
			b++;
			c = '0';
		}
		a++;
		b = '0';
	}
	putchar('\n');
	return (0);
}
