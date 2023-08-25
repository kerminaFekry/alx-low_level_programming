/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: Pointer to the resulting encoded string.
 */
char *rot13(char *str)
{
    int i;
    char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; str[i] != 0; i++)
    {
        if ((str[i] >= A && str[i] <= Z) ||
            (str[i] >= a && str[i] <= z))
        {
            int index = str[i] - A;
            if (str[i] >= a)
                index = str[i] - a + 26;

            str[i] = rot13[index];
        }
    }

    return str;
}
