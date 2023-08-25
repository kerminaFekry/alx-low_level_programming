#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void) {
int num1, num2;
for (num1 = 0; num1 < 10; num1++) {
for (num2 = 0; num2 < 10; num2++) {
putchar(num1 + 48);
putchar(num2 + 48);
if (num1 != 9 || num2 != 9) {
putchar(32);
putchar(44);
}
}
}
putchar(10);
return 0;
}
