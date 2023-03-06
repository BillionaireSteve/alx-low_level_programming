#include "main.h"
#include <stdio.h>
/**
* print_chessboard - Write a function that prints the chessboard.
*
* @a: This is my variable
*
*/
void print_chessboard(char (*a)[8])
{
int numb, check;
for (numb = 0; numb < 8; numb++)
{
for (check = 0; check < 8; checkx++)
{
_putchar(a[numb][check]);
}
_putchar('\n');
}
}
