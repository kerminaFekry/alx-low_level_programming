/**
 * string_toupper - Changes lowercase letters to uppercase in a string.
 * @str: The string to be modified.
 *
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *str)
{
    char *ptr = str;

    while (*ptr != 0)
    {
        if (*ptr >= a && *ptr <= z)
            *ptr -= 32;

        ptr++;
    }

    return str;
}
