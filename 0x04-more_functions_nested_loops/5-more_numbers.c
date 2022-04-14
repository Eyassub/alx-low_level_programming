#include "main.h"
/**
* more_numbers - gives numbers 10 times
*/
void more_numbers(void)
{
int count = 0;
char n, m;
while (count++ <= 9)
{
for (n = '0'; n <= '9'; n++)
{
for (m = '0'; m <= '14'; m++)
{
if (m > 9)
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
}
_putchar('\n');
}
}
