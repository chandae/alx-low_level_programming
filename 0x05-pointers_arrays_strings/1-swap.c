#include "main.h"

/**
*swap_int - swaps the value of two integers
*@a: pointer to first variable
*@b: pointer to second variable
*
*Return: void.
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
