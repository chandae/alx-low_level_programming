#include "main.h"
/**
* main - main code block
* description - prints the string to stdout
* return - type int (o) is returned
*/
int main(void)
{
	char i;
	char p[] = "_putchar";
	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
