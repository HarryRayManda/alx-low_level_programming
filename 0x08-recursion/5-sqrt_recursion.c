#include "main.h"
#include <stdio.h>

/**
 * _sqrt - Calculates natural square root
 * @n: the number to calculate the square root
 * @i: iterate the number
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_sqrt(n, +1));
}
