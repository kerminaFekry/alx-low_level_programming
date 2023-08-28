/**
 * _strchr - Locates the first occurrence of the character c
 *           in the string s.
 * @s: Pointer to the string.
 * @c: Character to be located.
 *
 * Return: Pointer to the first occurrence of the character c
 *         in the string s, or NULL if not found.
 */ #include <stddef.h>
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return s;
s++;
}

return (NULL);
}
