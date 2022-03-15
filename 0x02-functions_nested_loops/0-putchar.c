#include "main.h"
/**
 *main - program entry point
 *Description - print the word alphabet
 *Return:0 Always (Success)
 */
int main(void)
{
	int i;
	char text[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
