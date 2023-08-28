/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the bytes to match.
 *
 * Return: Pointer to the byte in s that matches one of the
 *         bytes in accept, or NULL if no such byte is found.
 */ #include <stddef.h>
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *ptr = accept;
while (*ptr)
{
if (*ptr == *s)
return s;
ptr++;
}
s++;
}

return (NULL);
}
