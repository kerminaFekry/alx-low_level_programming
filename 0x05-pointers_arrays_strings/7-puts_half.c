#include <stdio.h>
/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to a string.
 */
void puts_half(char *str)
{
int length = _strlen(str);
int start;

if (length % 2 == 0)
start = length / 2;
else
start = (length + 1) / 2;

while (str[start] != 0)
{
putchar(str[start]);
start++;
}

putchar(10);
}
