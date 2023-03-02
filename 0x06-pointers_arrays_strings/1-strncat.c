#include "main.h"

/**
 * *_strncat - function
 * @dest: destination
 * @src: source
 * @n: interger
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
char *b = dest;
while (*b != '\0')
{
b++;
}
while (a < n && *src != '\0')
{
*b = *src;
b++;
src++;
a++;
}
*b = '\0';
return (dest);
}
