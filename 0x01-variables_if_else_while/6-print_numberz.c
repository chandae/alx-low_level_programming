#include <stdio.h>
/**
 * main - main block
 * Description: prints the ASCII values of all single digit
 * numbers starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
