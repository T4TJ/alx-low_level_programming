#include "main.h"
#include <stdio.h>

/**
*main - check the code
*Description: C program to check whether a character is uppercase or lowercase
*Return: Always 0
*/

int main(void)
{
char ch;

_putchar("Enter any character: ");
scanf("%c", &ch);


if (ch >= 'A' && ch <= 'Z')
{
_putchar("'%c' is uppercase alphabet.", ch);
}
else if (ch >= 'a' && ch <= 'z')
{
_putchar("'%c' is lowercase alphabet.", ch);
}
else
{
_putchar("'%c' is not an alphabet.", ch);
}
return (0);
}
