#include <main.h>

/**
*_put -> function that print a spring, followed by a new line
*@str: a param to _puts function
*
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
