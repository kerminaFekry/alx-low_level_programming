#include <stdio.h>
/**
 * main - Entry point of the program
 *
  * Return: 0 on success
*/
 int main(void)
{
 int num1,num2;
for (num1 = 48; num1 < 58; num1++)
{
for (num2 =49; num2 < 58; num1++)
{
if (num1 != num2 && num2  > num1)
{
 putchar(num1);
 putchar(num2);
if (num1 != 56 || num2 != 57)  
{putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return(0);
}
