#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: 2D array representing the chessboard.
 *
 * Description: Each element of the array represents a square
 *              on the chessboard. The function prints the
 *              chessboard using the provided array.
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar(10);
}
}
