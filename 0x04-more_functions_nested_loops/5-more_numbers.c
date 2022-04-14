#include "main.h"
/**
* more_numbers - gives numbers 10 times
*/
void more_numbers(void)
{
int n, m;
for (n = 0; n < 10; n++)
{
for (m = 0; m < 15; m++)
{
if (m >= 10)
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
}
_putchar('\n');
}
}
