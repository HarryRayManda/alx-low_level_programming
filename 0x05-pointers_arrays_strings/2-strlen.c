#include <stdio.h>

/**
 * main - Entry point
 *
 * _strlen: Returns the length of a string
 * @str: length of str
 *
 * Return: Always 0 (Success)
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
