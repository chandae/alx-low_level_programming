#include "main.h"
/**
* _isupper - checks if letter is uppercase.
* @c: argument.
*
* Description: checks if letter is uppercase
* Return: 1 if letter is uppercase; 0 otherwise
*/
int _isupper(int c)
{
	/* Checks if letter is uppercase */
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
