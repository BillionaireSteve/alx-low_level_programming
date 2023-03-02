#include "main.h"
/**
 * *_strcat - function
 * @dest: destination of string
 * @src: parent string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
char *a = dest;
while (*a != '\0')
{
a++;
}
while (*src != '\0')
{
*a = *src;
a++;
src++;
}
*a = '\0';
return (dest);
}
