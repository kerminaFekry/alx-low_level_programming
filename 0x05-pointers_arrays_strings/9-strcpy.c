/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte, to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

while (*src != 0)
{
*dest = *src;
dest++;
src++;
}

*dest = 0;

return original_dest;
}
