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

char low;
for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');

return (0);
}
