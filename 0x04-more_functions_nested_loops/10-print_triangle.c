#include "main.h"
/**
* print_triangle - prints triangle to stdout
* @szie: size of the triangle
*/

void print_triangle(int size)
{
	int i, j, h;

	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		if (size == 1)
		{
			_putchar("#");
		}
		else
		{
			for (i = size; i > 0; i--)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(" ");
				}
				for (h = 0; h < size - i + 1; h++)
				{
					_putchar("#");
				}
				_putchar("\n");
			}
		}
	}
}
