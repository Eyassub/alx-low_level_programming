#include "main.h"
/**
* print_number - prints intiger numbers
* @n: numbers to be printed
* Return: intiger numbers
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
_putchar(n);
}
else
{
_putchar(n);
}
_putchar('\n')
}
