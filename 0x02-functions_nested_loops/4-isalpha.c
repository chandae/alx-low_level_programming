#include "main.h"
/**
 *_isalpha - check for alpha letters
 *@c: input.
 *
 *Return: 1 if c is alpha
 * 0 if c is anyhting else.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
