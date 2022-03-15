#include "main.h"

/**
*print_alphabet - abcd
*Description - prints the alphabet lowercase
*Return: void.
*/
void print_alphabet(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return;
}
