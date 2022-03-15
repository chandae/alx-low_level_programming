#include "main.h"

/**
 * main - program entry point
 * description - print the word alphabet
 * Return:0 Always (Success)
 */

int main(void)
{
	char i;
	char p[9] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar("\n");

	return (0);
}
