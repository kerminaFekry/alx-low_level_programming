#include <stdio.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to a string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;

if (*s == 45)
{
sign = -1;
s++;
}

while (*s != 0)
{
if (*s >= 0 && *s <= 9)
{
result = result * 10 + (*s - 0);
}
else
{
break;
}

s++;
}

return sign * result;
}
