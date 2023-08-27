#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
int num1, num2;

for (num1 = 0; num1 < 100; num1++)
{
for (num2 = num1; num2 < 100; num2++)
{
if (num1 != num2)
{
                putchar((num1 / 10) + 48);
                putchar((num1 % 10) + 48);
                putchar(32);
                putchar((num2 / 10) + 48);
                putchar((num2 % 10) + 48);

                if (num1 != 99 || num2 != 98){
                    putchar(44);
                    putchar(32);
                }
            }
        }
    }

    putchar(10);
    return (0);
}
