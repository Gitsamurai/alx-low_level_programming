#include "main.h"
/**
 * _isdigit - checkers if the no is b/n 0 to 9
 * @c: input no
 * Return: 1 if is a number (0 to 9),0 in other case.
 */
int _isdigit(int c)
{
if (c >= '0' && <= '9')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
