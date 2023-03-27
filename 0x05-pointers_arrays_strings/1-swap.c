#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @a: The first integer to be swaped
 * @b: The second integer o be swaped
 *
 * Return: nothings
 */

void swap_int(int *a, int *b)
/*hthe function that swaps the values of two integers. */	
{
int temp = *a;
*a = *b;
*b = temp;
}
