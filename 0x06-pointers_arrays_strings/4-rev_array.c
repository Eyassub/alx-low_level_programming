#include "main.h"
/**
* reverse_array - reverse content of array
* @a: array to be reversed
* @n: number of elements
*/
void reverse_array(int *a, int n);
{
int i, j, tmp;
j = n - 1;
while (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[j];
a[j--] = tmp;
}
}
