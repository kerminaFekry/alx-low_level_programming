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
putchar(letter);
}
for (letter = 65; letter <= 90; letter++)
{
putchar(letter);
}
putchar (10);
return (0);
}
