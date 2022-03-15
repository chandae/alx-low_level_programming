#include "main.h"

/**
 * main - print the word alphabet
 *
 * Return Always 0 (Success)
 */

int main(void)
{
	char i;
	char p[] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar("\n");

	return (0);
}
