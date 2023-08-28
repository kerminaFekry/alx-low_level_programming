/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *ptr;

while (*s)
{
ptr = accept;
while (*ptr)
{
if (*ptr == *s)
{
count++;
break;
}
ptr++;
}
if (*ptr == 0)
break;
s++;
}

return (count);
}
