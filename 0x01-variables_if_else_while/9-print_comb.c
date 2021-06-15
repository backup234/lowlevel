#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int single;

single = 0;
while (single < 10)
{
putchar(single + '0');
if (single != 9)
{
putchar(',');
putchar(' ');
}
single++;
}
putchar('\n');
return (0);
}
