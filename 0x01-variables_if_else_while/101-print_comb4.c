#include <stdio.h>
/**
* main - gives all possible different combinations of two digits
* Return: 0 is a success
*/
int main(void)
{
int o, n, m;
for (o = 0; o < 8; o++)
{
for (n = o + 1; n < 9; n++)
{
for (m = n + 1; m < 10; m++)
{
putchar((o % 10) + '0');
putchar((n % 10) + '0');
putchar((m % 10) + '0');
if (o == 7 && n == 8 && m == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
