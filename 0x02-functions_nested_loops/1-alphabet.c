#include "main.h"

/**
*main - program entry point
*Description - prints the alphabet lowercase
*Return: 1 on SUCCESS
*/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c;
	
	while ( c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return;
}
