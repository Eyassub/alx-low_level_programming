#include "main.h"
/**
* print_sign - shows the sign of number
* @n: the character to be checked
* Return: 1 if it is positive, 0 if it is 0 and -1 if it is negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
