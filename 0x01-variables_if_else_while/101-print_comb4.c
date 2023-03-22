#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Alaways 0 (success)
 *
 */
int main(void)
{
int i, h, b;
for (i = '0'; i < '9'; i++)
{
for (h = i + 1; h <= '9'; h++)
{
for (b = h + 1; b <= '9'; b++)
{
if ((h != i) != b)
{
putchar(i);
putchar(h);
putchar(b);
if (i == '7' && h == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
