#include "main.h"
/**
* print_line - prints a straight line
* @n: number of times _ is going to be printed
*/
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
