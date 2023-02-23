#include "main.h"
/**
 * _isdigit - check if a character is a digit
 * @c: the number that is to be checked
 * Return 1 or a character that is a digit or 0 for error
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
