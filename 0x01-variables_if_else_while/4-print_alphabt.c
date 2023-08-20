#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
char letter;
for (letter = 97; letter <= 122; letter++)
{
if (letter != 71 && letter != 65)
{
putchar(letter);
}
}
putchar(10);

return (0);
}
