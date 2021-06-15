#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;

a = 'z';
while (a >= 'a')
{
	putchar(a--);
}
putchar('\n');
return (0);
}
