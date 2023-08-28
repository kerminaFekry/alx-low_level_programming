/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be located.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
#include <stddef.h>
char *_strstr(char *haystack, char *needle)
{
if (*needle == 0)
return (haystack);

while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*n && *h == *n)
{
h++;
n++;
}
if (*n == 0)
return (haystack);
haystack++;
}

return (NULL);
}
