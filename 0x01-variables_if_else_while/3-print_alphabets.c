#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  Entry point,prints the alphabet in lowercase, and then in uppercase
 * Retur: Alaways 0 (success)
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
