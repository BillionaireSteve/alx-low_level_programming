#include "main.h"
#include <stdio.h>

/**
 * print_arry - prints n elements of an arry
 * @a: arry
 * @b: number of values to be printed
 */
void print_arry(int *a, int b)
{
int t;
for (t = 0; t < b; t++)
{
printf("%d", a[t]);
if (t != b - 1)
printf(", ");
}
printf("\n");
}
