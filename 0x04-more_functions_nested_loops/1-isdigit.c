#include <stdlib.h>
#include "main.h"

/**
* _isdigit - checks if argument is digit between 0 and 9
* @c: number to check
* Return: 1 if argument is digit; 0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
