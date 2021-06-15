#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x = 0;
while (x < 10)
{
putchar(x + '0');
x++;
}
x = 'a';
while (x <= 'f')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
