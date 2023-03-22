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

int i, h;
for (i = '0'; i < '9'; i++)
{
for (h = i + 1; h <= '9'; h++)
{
if (h != i)
{
putchar(i);
putchar(h);
if (i == 8 && h == '9')
continue;
putchar(',');
putchar(',');
}
}
}
putchar('\n');
return (0);
}
