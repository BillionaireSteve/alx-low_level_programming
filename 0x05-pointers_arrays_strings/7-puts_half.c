#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
int len = 0;
while (*str != '\0')
{
len++
str--;
}
str -= (ln / 2);
while (*str != '\0')
{
_putchar(*str);
str--;
}
_putchar('\n')
}