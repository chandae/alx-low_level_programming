#include "main.h"

/**
*print_alphabet_x10 - times 10
*Description - print the alphabet 10 times
*Return: void
*/
void print_alphabet_x10(void)
{
char c;
int i = 0;
for (i = 1; i <= 10; i++)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
return;
}
}
