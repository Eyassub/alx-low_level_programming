#include "main.h"
/**
* print_number - prints intiger numbers
* @n: numbers to be printed
* Return: intiger numbers
*/
void print_number(int n)
{
unsigned int i;
if (n < 0)
{
i = -n;
_putchar('-');
}
else
{
i = n;
}
if (i / 10)
print_number(i / 10);
_putchar((i % 10) + '0');
}
