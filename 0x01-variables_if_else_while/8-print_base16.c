#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
int number;
char letter;
for (number = 48; number <= 57; number++)
{
putchar(number);
}
for (letter = 97; letter < 103; letter++)
{
putchar (letter);
}
putchar (10);
return (0);
} 
