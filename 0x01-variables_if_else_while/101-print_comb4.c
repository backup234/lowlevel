#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '9')

	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '9' || b != '9' || c != '9')
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
	putchar('\n');
	return (0);
}
