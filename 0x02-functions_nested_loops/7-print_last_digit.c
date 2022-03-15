#include "main.h"

/**
 *print_last_digit - last digit of number
 *@n: input.
 *
 *Return: last digit of number.
 */
int print_last_digit(int n)
{
int last;
if (n >= 0)
{
last = n % 10;
}
else
{
last = (n % 10) * -1;
}
_putchar('0' + last);
return (last);
}
