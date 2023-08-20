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
if (letter != 113 && letter != 101)
{
putchar(letter);
}
}
putchar(10);

return (0);
}
