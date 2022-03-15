#include <stdio.h>
#include <stdlib.h>
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
		putchar(p[i]);
	}
	putchar('\n');
	return (0);
}
