#include "main.h"
/**
* print_triangle - prints triangle to stdout
* @size: size of the triangle
*/

void print_triangle(int size)
{
	int i, j, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = 0; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (h = 1; h <= i; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
