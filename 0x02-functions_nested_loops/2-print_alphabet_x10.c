#include "main.h"
/**
 * Discription- print lowercase letters x10 times
 * print_alphabet_x10 times the alphabet in lowercase
 * followed bay a new line
 */
void print_alphabet_10x(void)
{
char c;
int i = 0;
while (i <= 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
