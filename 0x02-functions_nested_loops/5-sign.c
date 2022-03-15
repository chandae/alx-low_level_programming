#include "main.h"

/**
*print_sign - + or - or 0
*@n: input.
*Description - prints the sign of a number n
*Return: 1 and print + if n is greater than zero
*0 and print 0 if n is zero
*-1 and print - if n is less than zero
*/

int print_sign(int n)
{
int result;

if (n > 0)
{
_putchar('+');
result = 1;
}
if (n == 0)
{
_putchar('0');
result = 0;
}
if (n < 0)
{
_putchar('-');
result = -1;
}
return (result);
}
