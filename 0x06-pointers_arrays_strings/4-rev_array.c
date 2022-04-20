#include "main.h"
/**
* reverse_array - reverse content of array
* @a: array to be reversed
* @n: number of elements
*/
void reverse_array(int *a, int n);
{
int i, j, tmp;
while (i < j)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
i++;
}
}
