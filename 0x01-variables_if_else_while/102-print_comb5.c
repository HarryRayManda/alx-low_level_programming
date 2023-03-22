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
for (i = '0'; i < '98'; i++)
{
for (h = i + 1; h <= '99'; h++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((h / 10) + '0');
putchar((h % 10) + '0');
if (i == 98 && h == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
