#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input your value
 * @src: input your value 
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int b;
int c;
b = 0;
while (dest[b] != '\0')
{
b++;
}
c = 0;
while (src[c] != '\0')
{
dest[b] = src[c];
b++;
c++;
}
dest[b] = '\0';
return (dest);
}
