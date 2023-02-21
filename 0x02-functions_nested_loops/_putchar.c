#include <unistd.h>
/**
 * _putchar - writes the charter of C to stdout
 * the character pirints
 * Return 1 on success
 * Returns 0 one errors
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
