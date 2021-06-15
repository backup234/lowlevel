#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char let = 'a';
while (let <= 'z')
{
if (let != 'e' && let != 'q')
putchar(let);
let++;
}
putchar ('\n');
return (0);
}
