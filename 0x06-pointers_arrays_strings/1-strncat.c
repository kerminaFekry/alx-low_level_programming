/**
 * _strncat - Concatenates n bytes from src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be concatenated.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*ptr != 0)
        ptr++;

    while (*src != 0 && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    *ptr = 0;

    return dest;
}
