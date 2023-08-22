#include <stdio.h>
#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to a string.
 */
void print_rev(char *s)
{
int length = _strlen(s);

while (length > 0)
{
putchar(s[length - 1]);
length--;
}

putchar(10);
}
