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

int i;
char low;

for (i = '0'; i <= '9'; i++)
putchar(i);

for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');


return (0);
}
