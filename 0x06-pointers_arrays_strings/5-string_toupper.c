#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @str: the string to change
 *
 * Return: the string that change for uppercase
 */
char *string_toupper(char *str)
{
int y;
y = 0;
while (str[y] != '\0')
{
if (str[y] >= 97 && str[y] <= 122)
{
str[y] = str[y] - 32;
}
y++;
}
return (str);
}
