#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  prints the alphabet in lowercase
 * Retur: Alaways (success)
 */
int main(void)
{
char low;

for (low = 'a'; low <= 'z'; low++)
putchar(low);

for (low = 'A'; low <= 'Z'; low++)
putchar(low);
putchar('\n');

return (0);
}
